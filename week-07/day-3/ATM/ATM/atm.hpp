//
//  atm.hpp
//  ATM
//
//  Created by Oz on 11/22/17.
//  Copyright © 2017 Oscar Inc. All rights reserved.
//

#ifndef atm_hpp
#define atm_hpp

#include <stdio.h>

#include <iostream>
#include <vector>


using namespace std;

class Account{
protected:
    string username;
    int pin;
    double balance;
public:
    Account(){
    }
    Account(string username, int pin, double balance){
        this->username = username;
        this->pin = pin;
        this->balance = balance;
    }
    Account(string username, int pin){
        this->username = username;
        this->pin = pin;
        this->balance = pin - (2 * pin);
        
    }
    string get_username(){
        return username;
    }
    int get_pin(){
        return pin;
    }
    int get_balance(){
        return balance;
    }
};

class ATM {
private:
    bool attempt_permission = true;
    int attempts = 0;
    bool username_flag = true;
    int account_position = -1;
    string username_check = "";
    double ATM_balance = 0;
protected:
    vector<Account> account_vector;
    void admin_interface();
    void user_interface();
    void cash_insert();
    bool continue_prompt();
    void reset_login();
    
public:
    void addAccount(Account &acc);
    void login();
    
};

#endif /* atm_hpp */
