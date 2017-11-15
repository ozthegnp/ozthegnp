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
protected:
    void increment_odometer(int km){
        odometer += km;
    }
    void add_person_to_car(){
        if(car_occupancy < number_of_seats)
            car_occupancy++;
        else
            cout << "The car is full" << endl;
    }

};
int main()
{

    return 0;
}
