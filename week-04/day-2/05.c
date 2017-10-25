#include <stdio.h>

typedef struct {
    char *address;
    float price;
    int room;
    int area;
} HOUSE;

int worth(HOUSE *house);

int main() {


    HOUSE array[] = {
        {"deak ter", 10000, 1, 60},
        {"kossuth ter", 7000, 2, 10},
        {"gellert ter", 20000, 3, 53},
        {"astoria", 18000, 4, 44}
        };

    for (int i = 0; i < 4; i++){
        if(worth(&array[i]) == 1)
            printf("Buy house%d\n", i+1);
        else
            printf("Don't buy house%d\n", i+1);
    }

  return 0;
}

int worth(HOUSE *house)
{
    if (house->price / house->area < 401)
        return 1;
    else
        return 0;
}
