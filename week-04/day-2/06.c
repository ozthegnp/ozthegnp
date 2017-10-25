#include <stdio.h>
#include <string.h>


struct Pirate {
    char name[256];
    int has_wooden_leg;
    short int gold_count;
};

// TODO:
// Create a function that takes an array of pirates (and it's length) then returns the sum of the golds of all pirates

// TODO:
// Create a function that takes an array of pirates (and it's length) then returns the average of the gold / pirate

// TODO:
// Create a function that takes an array of pirates (and it's length) then returns the name of the
// richest that has wooden leg
int goldsum(struct Pirate pirates[], int piratesnum);
char *richest(struct Pirate pirates[], int piratesnum);

int main() {
    struct Pirate pirates[] = {
        {"Jack", 0, 18},
        {"Uwe", 1, 8},
        {"Hook", 1, 12},
        {"Halloween kid", 0, 0},
        {"Sea Wolf", 1, 14},
        {"Morgan", 0, 1}
    };

    int piratesnum = sizeof(pirates) / sizeof(pirates[0]);

    printf("Total gold of pirartes: %d\n", goldsum(pirates, piratesnum));
    printf("Avarage gold of piratres: %d\n", (goldsum(pirates, piratesnum))/piratesnum);
    printf("The richest pirate is: %s\n", richest(pirates, piratesnum));


    return 0;
}

int goldsum(struct Pirate pirates[], int piratesnum)
{
    int goldsum = 0;
    for(int i = 0; i < piratesnum ; i++){
        goldsum += pirates[i].gold_count;
    }
    return goldsum;
}
char *richest(struct Pirate pirates[], int piratesnum)
{
    char *richpirate;
    int mostgold = 0;

    for(int i = 0; i < piratesnum ; i++){
        if(pirates[i].gold_count > mostgold && pirates[i].has_wooden_leg > 0){
            mostgold = pirates[i].gold_count;
            richpirate = pirates[i].name;
        }
    }

    return richpirate;
}
