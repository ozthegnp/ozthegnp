//
//  atm.cpp
//  ATM
//
//  Created by Oz on 11/22/17.
//  Copyright © 2017 Oscar Inc. All rights reserved.
//

#include "atm.hpp"

void configureAccounts(ATM* atm) {
    atm->addAccount(*new Account("admin", 12341234));//what is *new?
    atm->addAccount(*new Account("anna", 1111, 100));
    atm->addAccount(*new Account("bela", 2222, 200));
    atm->addAccount(*new Account("cili", 3333, 300));
}

void ATM::login(){
    
    while(attempt_permission){
        
        int pin_check;
        
        try{
            if(username_flag){
                username_check = "";
                cout << "type username: ";
                cin >> username_check;
            
                
                for(unsigned int i = 0; i < account_vector.size(); i++){
                    if(username_check == account_vector[i].get_username()){
                        account_position = i;
                    }
                }
                
                if(account_position == -1){
                    throw runtime_error("account not found");
                }
            }
            
            username_flag = false;

            if(account_vector[account_position].get_balance() < 0){
                attempt_permission = false;
            }
            
            cout << "please enter PIN" << endl;
            cin >> pin_check;
            
            if(pin_check != account_vector[account_position].get_pin()){
                attempts++;
                if(attempts > 2){
                    attempt_permission = false;
                }
                throw runtime_error("invalid pin");
            }
        
            if(account_vector[account_position].get_balance() != pin_check - (2 * pin_check)){
                user_interface(account_position);
            } else{
                admin_interface();
                
            }
        }catch(runtime_error &err){
            cout << err.what() << endl;
        }
    }
}
void ATM::reset_login(){
    username_check = "";
    attempt_permission = true;
    username_flag = true;
    attempts = 0;
    account_position = -1;
}
void ATM::addAccount(Account &acc){
    account_vector.push_back(acc);
}
void ATM::admin_interface(){
    cout << "=== ADMIN INTERFACE ===" << endl << endl;
    cout << "Welcome! As an admin you are able to: " << endl;
    cout << "- insert cash in the atm" << endl << endl;
    
    cash_insert();
    reset_login();

}
void ATM::user_interface(int position){
    cout << "=== USER INTERFACE ===" << endl;
    cout << "Welcome! As a user you are able to: " << endl;
    cout << "1 - check your balance" << endl;
    cout << "2 - withdraw cash from the atm" << endl << endl;
    cout << "enter your command: " << endl;
    
    get_richest();
    user_balance(position);
    deposit_cash(position);
    
    withdraw_cash(position);

    reset_login();

}
void ATM::user_balance(int position){
    cout << "Your balance is: $"<<account_vector[position].get_balance() << endl;
    
}
void ATM::deposit_cash(int position){
    int amount;
    cout << "How much would you like to deposit??" << endl;
    cin >> amount;
    account_vector[position].set_balance(amount);
    cout << "Deposit succeeded. Your new balance is $" << account_vector[position].get_balance() <<endl;
}
void ATM::withdraw_cash(int position){
    int amount;
    cout << "How much would you like to withdraw??" << endl;
    cin >> amount;
    account_vector[position].set_balance(-amount);
    cout << "Deposit succeeded. Your new balance is $" << account_vector[position].get_balance() <<endl;
}
void ATM::get_richest(){
    string richest = account_vector[0].get_username();
    
    for(unsigned int i = 1; i < account_vector.size(); ++i){
        if(account_vector[i].get_balance() > account_vector[i - 1].get_balance()){
            richest = account_vector[i].get_username();
        }
    }
    
    cout << "The richest person is: " << richest << endl;
    
}
void ATM::cash_insert(){
    double cash_insert;
    
    cout << "How much cash would you like to insert?" << endl;
    cin >> cash_insert;
    
    ATM_balance += cash_insert;
    
    cout << "Success! New Balance: $" << ATM_balance <<endl << endl;
    
    if(continue_prompt()){
        ATM::cash_insert();
    }
}

bool ATM::continue_prompt(){
    char yes_no = 0;
    bool flag = true;
    
    while(flag){
        cout << "Do you wish to continue?(y/n)" << endl;
        cin >> yes_no;
        
        if(yes_no == 'y' || yes_no == 'n'){
            flag = false;
        } else{
            cout << "invalid input" << endl;
        }
    }
    if(yes_no == 'y'){
        return 1;
    } else{
        return 0;
    }
}
int ATM::bill_summarizor(){
    int sum = 0;
    
    sum += bill_counter(20);
    return sum;
}

int ATM::bill_counter(int  bill){
    int bill_count = 0;
    cout << "How many $"<< bill << "bill(s) you're adding?"<< endl;
    cin >> bill_count;
    cout << "$"<< bill * bill_count << "added" << endl;
    return bill * bill_count;
}

