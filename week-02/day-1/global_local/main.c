#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "global_local.h"

int speed_of_sound = 340; //  [m/s]

int give_me_distance(int time)
{
    int distance = time * speed_of_sound;
    return distance;
}

int give_me_distance_in_km(int time)
{
    int divider = 1000;
    int distance = time * speed_of_sound / divider;
    return distance;

    //here we have a third local variable called divider

}

//as you can see local variable values can use the same name
//like time and distance and have a different values
//think about the given functions as well, are we usng them correctly?

int main()
{
    printf("A %d second lightning is %d meters away \n",FIVE, give_me_distance(FIVE));
    printf("A %d second lightning is %d kilometers away",FIFTY, give_me_distance_in_km(FIFTY));

	return 0;

}
