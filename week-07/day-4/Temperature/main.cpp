#include <iostream>

#include <string>

#include <vector>

#include <windows.h>

#include <conio.h>

#include <stdio.h>

#include "data.h"

//#include <



#include "SerialPortWrapper.h"



using namespace std;



void WelcomeScreen();



Data data_checker(string user_input);



int stoi(string s);



int main()

{

    Data temp;

    vector<Data> data_vector;



    if(data_checker("2016.08.09 23:34:43 435").year < 0){

        cout << "Invalid" << endl;

    };





    vector<string> ports = SerialPortWrapper::listAvailablePorts();

    cout << "Number of found serial ports: " << ports.size() << endl;



    unsigned int i = 0;

    for (i = 0; i < ports.size(); i++) {

        cout << "\tPort name: " << ports.at(i) << endl;

    }

    // connection



    SerialPortWrapper *serial = new SerialPortWrapper(ports.at(0), 115200);

    //serial->openPort();

    string line;



    // dinamikus vektortoltes for ciklus helyett pushback-kel

    // do while hatultesztelossel az ujabb 's' parancsig futtat

    string input;

    //bool portflag = false;

    while(1){



        //if(portflag){

            //serial->openPort();

        //}

        cout << "Please add input" << endl << endl;

        cin >> input;



        if(input == "h"){

            WelcomeScreen();

        }

        else if(input == "o"){

            serial->openPort();

            cout << "Port opened" << endl << endl;

            }

        else if(input == "s"){

            cout << "Logging started\n";

            while(1){

            if(kbhit()){

                cout << "Logging stopped" << endl << endl;

                break;

            }

            serial->readLineFromPort(&line);

            if (line.length() > 0){

            cout << line << endl;

            }

        }



        }

        else if(input == "c"){

            serial->closePort();

            cout << "Port closed" << endl;

        }

        else if(input == "l"){

            //todo

        }

        else if(input == "e"){

            exit(0);

        }

    }



    return 0;

}



void WelcomeScreen(){



    cout << "Temperature Logger Application\n";

    cout << "==============================" << endl;

    cout << "Commands: " << endl;

    cout << "h  Show command list " << endl;

    cout << "o  Open port " << endl;

    cout << "s  Start logging / Stop logging" << endl;

    cout << "c  Close port " << endl;

    cout << "l  List after error handling " << endl;

    cout << "e  Exit from the program " << endl;

    cout << "==============================" << endl;

    cout << endl;



}

int stoi(string str)

{

    const char* s = str.c_str();



    long i;

    i = 0;

    while(*s >= '0' && *s <= '9')

    {

        i = i * 10 + (*s - '0');

        s++;

    }

    return i;

}



Data data_checker(string user_input){

    Data data;



    try{

        size_t pos = user_input.find('.');//looks for char



        data.year = stoi(user_input.substr(0, pos));//fills up string until char

        cout << data.year << endl;

        if(data.year > 2016){

            throw 1;

        }



        user_input.erase(0, pos + 1); // deletes everythin befor char in original string

        pos = user_input.find('.'); //looks for new char




        data.month = stoi(user_input.substr(0, pos));

        cout << data.month << endl;



        //task = user_input.substr(0, pos);//fills up task string with other info



        user_input.erase(0, pos + 1); // deletes everythin befor char in original string

        pos = user_input.find(' '); //looks for new char



        data.day = stoi(user_input.substr(0, pos));

        cout << data.day << endl;



        user_input.erase(0, pos + 1); // deletes everythin befor char in original string

        pos = user_input.find(':'); //looks for new char



        data.hour = stoi(user_input.substr(0, pos));

        cout << data.hour << endl;



        user_input.erase(0, pos + 1); // deletes everythin befor char in original string

        pos = user_input.find(':'); //looks for new char



        data.minute = stoi(user_input.substr(0, pos));

        cout << data.minute << endl;



        user_input.erase(0, pos + 1); // deletes everythin befor char in original string

        pos = user_input.find(' '); //looks for new char



        data.second = stoi(user_input.substr(0, pos));

        cout << data.second << endl;



        user_input.erase(0, pos + 1); // deletes everythin befor char in original string



        data.temperature = stoi(user_input);

        cout << data.temperature << endl;

    } catch(int a){

        data.year = -1;

        return data;

    }





    //priority = user_input;



    return data;

}
