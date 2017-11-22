//
//  main.cpp
//  ATM
//
//  Created by Oz on 11/22/17.
//  Copyright © 2017 Oscar Inc. All rights reserved.
//

#include <iostream>
#include <vector>
#include "atm.hpp"



using namespace std;

void configureAccounts(ATM* atm);

int main() {
    ATM atm;
    configureAccounts(&atm);
    atm.login();
    cout << "ATM exited" << endl;

    return 0;
}
