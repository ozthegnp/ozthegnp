#include <stdio.h>
#include <stdlib.h>

enum CarType {VOLVO, TOYOTA, LAND_ROVER, TESLA};


typedef struct Car {
  enum CarType type;
  double km;
  double gas;
}CAR;
void carprinter(CAR car);
// TODO:
// Write a function that takes a Car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level
int main() {

    CAR vo = {VOLVO, 12, 100};
    CAR to = {TOYOTA, 14, 80};
    CAR la = {LAND_ROVER, 15, 70};
    CAR te = {TESLA, 17, 50};

    int cartype = 0;
    printf("type:");
    scanf("%d", &cartype);

    switch(cartype){
        case 1:
            carprinter(vo);
            break;
        case 2:
            carprinter(to);
            break;
        case 3:
            carprinter(la);
            break;
        case 4:
            carprinter(te);
            break;
        default:
            printf("not valid");
    }

  return 0;
}

void carprinter(CAR car)
{
    printf("Km: %.lf\n", car.km);
    if(car.type != TESLA)
    printf("Gas: %.lf\n", car.gas);
}
