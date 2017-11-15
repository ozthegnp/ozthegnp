#include <iostream>
#include <vector>

using namespace std;

// Create a Car class.
// Create the following private variables : age, kms_runed, manufacturer, number_of_seats
// use proper variable types.
// Implement a method which has one parameter, and increases the kms_runed variable by its parameter value.
// Implement a method which can add a person to a car, if the number of persons in the car reached
// the value of number of seats in the car it should tell you that 'The car is full!' or something like that.
// Inherite at least two car models and try out the methods you have created.

class Car{
private:
    string manufacturer;
    int model_year;
    int number_of_seats;
    int odometer;
    int car_occupancy = 0;
public:
    void increment_odometer(int km){
        odometer += km;
        cout << "Odometer incremented by " << km << " kms" << endl;
    }

    void add_person_to_car(){
        if(car_occupancy < number_of_seats){
            car_occupancy++;
            cout << "Person added to car" << endl;
        }
        else
            cout << "The car is full! Maximum occupancy is: " << number_of_seats << " person" <<endl;
    }

    void set_parameters(string manufacturer, int model_year, int number_of_seats, int odometer){
        this->manufacturer = manufacturer;
        this->number_of_seats = number_of_seats;
        this->model_year = model_year;
        this->odometer = odometer;
    }

    void get(string command){    //Get information of car based on a string input
        if(command == "all"){
            cout << "manufacturer: " << manufacturer << endl;
            cout << "model year: " << model_year << endl;
            cout << "odometer: " << odometer << " kms" <<endl;
            cout << "occupancy: " << car_occupancy << "/"<< number_of_seats << endl << endl;
        }
        if(command == "odometer"){
            cout << command + ": " << odometer << " kms" << endl << endl;
        }
        if(command == "manufacturer"){
            cout << command + ": " << manufacturer << endl << endl;
        }
        if(command == "capacity"){
            cout << command + ": " << number_of_seats<< " seats" << endl << endl;
        }
        if(command == "year"){
            cout << command + ": " << model_year << endl << endl;
        }
        if(command == "occupancy"){
            cout << command + ": " << car_occupancy << "/"<< number_of_seats << endl << endl;
        }
    }

};
class BMW: public Car{
public:
    BMW(int model_year, int number_of_seats, int odometer){
        set_parameters("BMW", model_year, number_of_seats, odometer);
    }
};

class Mustang: public Car{
public:
    Mustang(int model_year, int number_of_seats, int odometer){
        set_parameters("Mustang", model_year, number_of_seats, odometer);
    }
};

int main()
{
    BMW bmw(2017, 5, 1000);
    bmw.get("all");

    bmw.increment_odometer(10);
    bmw.get("odometer");

    for(int i = 0; i < 6;i++){
        bmw.add_person_to_car();
        bmw.get("occupancy");
    }
    cout << "=======================" << endl << endl;

    Mustang mst(1990, 4, 55000);
    mst.get("all");

    mst.increment_odometer(13344);
    mst.get("odometer");

    for(int i = 0; i < 5;i++){
        mst.add_person_to_car();
        mst.get("occupancy");
    }

    return 0;
}
