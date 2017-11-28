#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Tom, Mark and Jerry went to the supermarket
//help them decide what can they buy out of their money

float tom = 2000;
float mark = 3500;
float jerry = 1200;

int can_they_buy_a_new_tv();
int can_they_make_a_cake();
int can_they_make_ham_and_eggs();



int main()
{
    int sum = tom + mark + jerry;

    if(can_they_buy_a_new_tv() >= 0)
        printf( "You can buy the TV, $%d mutual funds left.\n", can_they_buy_a_new_tv());
    else
        printf( "Insufficient funds for TV! Need $%d more\n", abs(can_they_buy_a_new_tv()));

    if(can_they_make_a_cake() >= 0)
        printf( "You can bake the cake, you have to pay $%.2f each.\n", ((tom + mark + jerry)-can_they_make_a_cake())/3);
    else
        printf( "Insufficient funds for cake! Need $%d more\n", abs(can_they_make_a_cake()));

    if(can_they_make_ham_and_eggs() >= 0)
        printf( "You can make ham and eggs, you have to pay $%.2f each.\n", ((tom + mark + jerry)-can_they_make_ham_and_eggs())/3);
    else
        printf( "Insufficient funds for ham and eggs! Need $%d more\n", abs(can_they_make_ham_and_eggs()));

    return 0;
}

int can_they_buy_a_new_tv()
{
    int tv_price = 6950;
    int tv_remainder = (tom + mark + jerry) - tv_price;
    return tv_remainder;
}

int can_they_make_a_cake()
{
    int milk = 200;
    int chocolate = 340;
    int flour = 75;
    int egg = 345;
    int sugar = 160;
    int salt = 90;
    int oven_shape = 330;
    int cream = 220;

    float cake_price = milk + chocolate + flour + egg + sugar + salt + oven_shape + cream;

    float cake_remainder = (tom + mark + jerry) - cake_price;
    return cake_remainder;

    //if they can buy all these stuff calculate how much
    //each of them should pay to share the bill equally
}

int can_they_make_ham_and_eggs()
{
    int milk = 200;
    int egg = 345;
    int salt = 90;
    int ham = 450;
    int onion = 60;
    int spice = 25;

    int sum = tom + mark + jerry;

    float ham_price = milk + egg + salt + ham + onion + spice;

    float ham_remainder = (tom + mark + jerry) - ham_price;
    return ham_remainder;

    //if they can buy all these stuff calculate how much
    //each of them should pay to share the bill equally
}

//is there any local or global variables we did not use well?
//are we using functions correctly?


