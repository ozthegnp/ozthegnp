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
    bool attempt_permission = true;
    int attempts = 0;
    bool username_flag = true;
    
    while(attempt_permission){
        
        int account_position = -1;
        int pin_check;
        string username_check = "";
        
        try{
            if(username_flag){
                cout << "type username: ";
                cin >> username_check;
            }
                
            for(unsigned int i = 0; i < account_vector.size(); i++){
                if(username_check == account_vector[i].get_username()){
                    account_position = i;
                }
            }
                
            if(account_position == -1){
                throw runtime_error("account not found");
            }
            
            cout << "please enter PIN" << endl;
            cin >> pin_check;
            
        if(pin_check != account_vector[account_position].get_pin()){
            throw runtime_error("invalid pin");
        }
        
            if(account_vector[account_position].get_balance() != pin_check - (2 * pin_check)){
                user_interface();
            } else{
                admin_interface();
            }
        }catch(runtime_error &err){
            cout << err.what() << endl;
        }
    }
}

void ATM::addAccount(Account &acc){
    account_vector.push_back(acc);
}
void ATM::admin_interface(){
    cout << "=== ADMIN INTERFACE ===" << endl << endl;
    cout << "Welcome! As an admin you are able to: " << endl;
    cout << "- insert cash in the atm" << endl << endl;
    
    cash_insert();
    
}
void ATM::user_interface(){
    cout << "=== USER INTERFACE ===" << endl;
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
