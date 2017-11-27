#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include "data.h"

#include "SerialPortWrapper.h"

using namespace std;

void WelcomeScreen();

Data data_checker(string user_input);

int stoi(string s);

int main()

{

    Data temp;
    vector<Data> data_vector;



    vector<string> ports = SerialPortWrapper::listAvailablePorts();
    cout << "Number of found serial ports: " << ports.size() << endl;

    unsigned int i = 0;
    for (i = 0; i < ports.size(); i++) {
        cout << "\tPort name: " << ports.at(i) << endl;
    }
    SerialPortWrapper *serial = new SerialPortWrapper(ports.at(0), 115200);

    string input;

    while(1){

        cout << "Please add input" << endl << endl;
        cin >> input;

        if(input == "h"){
            WelcomeScreen();
        } else if(input == "o") {
            serial->openPort();
            cout << "Port opened" << endl << endl;
        } else if(input == "s"){
            cout << "Logging started\n";
            while(1){
                string line = "";

                if(kbhit()){
                    cout << "Logging stopped" << endl << endl;
                    break;
                }

                serial->readLineFromPort(&line);

                if (line.length() > 0){

                    try{
                    data_vector.push_back(data_checker(line));
                    cout << "record logged" << endl;

                    }catch(const char* error){
                    //cout << "there is a problem: " << error << endl;
                    }
                }
            }
        } else if(input == "c"){

            serial->closePort();

            cout << "Port closed" << endl;

        } else if(input == "l"){

            int sum = 0;
            int temp_max = 0;

            for(unsigned int i = 0; i < data_vector.size(); ++i){
                    cout << data_vector[i].year << ".";
                    cout << data_vector[i].month << ".";
                    cout << data_vector[i].day << " ";
                    cout << data_vector[i].hour << ":";
                    cout << data_vector[i].minute << ":";
                    cout << data_vector[i].second << " ";
                    cout << data_vector[i].temperature << endl;

                    sum += data_vector[i].temperature;
                    if(data_vector[i].temperature > temp_max){
                        temp_max = data_vector[i].temperature;
                    }
            }

            cout << "Avarage temperature is: " << sum / data_vector.size() << endl;
            cout << "Max temperature: " << temp_max << endl;
        } else if(input == "e"){
            exit(0);
        }
    }
    return 0;
}

void WelcomeScreen(){

    cout << "Temperature Logger Application\n"
     "==============================\n"
     "Commands: \n"
     "h  Show command list \n"
     "o  Open port \n"
     "s  Start logging / Stop logging\n"
     "c  Close port \n"
     "l  List after error handling \n"
     "e  Exit from the program \n"
     "==============================" << endl << endl;


}

int stoi(string str){
    const char* s = str.c_str();
    long i;
    i = 0;

    while(*s >= '0' && *s <= '9') {
        i = i * 10 + (*s - '0');
        s++;
    }
    return i;

}



Data data_checker(string user_input){
    Data data;
        size_t pos = user_input.find('.');//looks for char



        data.year = stoi(user_input.substr(0, pos));//fills up string until char
        if(data.year > 2016){
            throw "Invalid Year";
        }

        user_input.erase(0, pos + 1); // deletes everythin befor char in original string
        pos = user_input.find('.'); //looks for new char
        data.month = stoi(user_input.substr(0, pos));

        //if(data.month > 12 || data.month < 1){
          //  throw "Invalid Month";
       // }

        user_input.erase(0, pos + 1); // deletes everythin befor char in original string
        pos = user_input.find(' '); //looks for new char
        data.day = stoi(user_input.substr(0, pos));

        if(data.day > 31 || data.day < 1){
            throw "Invalid Day";
        }
        if(data.month == 2){
            if((data.year % 4 != 0 && data.day > 28) || (data.year % 4 == 0 && data.day > 29)){
                throw "February error";

           }
        }
        if(data.month < 8 && data.month % 2 == 0 && data.day > 30){
                throw "Month has only 30 days";

        } else if(data.month > 7 && data.month %2 == 1 && data.day > 30){
                throw "Month has only 30 days";
        }

        user_input.erase(0, pos + 1); // deletes everythin befor char in original string
        pos = user_input.find(':'); //looks for new char
        data.hour = stoi(user_input.substr(0, pos));

        if(data.hour > 24 || data.hour < 0){
            throw "invalid hour";
        }

        user_input.erase(0, pos + 1); // deletes everythin befor char in original string
        pos = user_input.find(':'); //looks for new char
        data.minute = stoi(user_input.substr(0, pos));

        if(data.minute > 59 || data.minute < 0){
            throw "invalid minute";
        }

        user_input.erase(0, pos + 1); // deletes everythin befor char in original string
        pos = user_input.find(' '); //looks for new char
        data.second = stoi(user_input.substr(0, pos));

        if(data.second > 59 || data.second < 0){
            throw "invalid second";
        }

        user_input.erase(0, pos + 1); // deletes everythin befor char in original string
        data.temperature = stoi(user_input);

        if(data.temperature > 1000 || data.temperature < -273){
            throw "invalid temp";
        }
    return data;

}
