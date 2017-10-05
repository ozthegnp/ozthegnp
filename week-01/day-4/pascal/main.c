#include <stdio.h>

int main()
{
    for(int a = 1; a < 9; a++){
           switch(a) {
            case 1:
            case 8:
                printf("      *\n");
                break;
            case 2:
            case 7:
                printf("    * * *\n");
                break;
            case 3:
            case 6:
                printf("  * * * * *\n");
                break;
            default:
                printf("* * * * * * *\n");
           }
    }

    int d = 4;

    /*printf("Enter diamond size:" ); //this for any size diamond with input
    scanf(" %d", &d);*/

    for (int i = -d; i <= d; i++){
        if (i != 0){
            for (int s = 3; s <= 2 * abs(i); s++){
                printf(" ");
            }
            for (int s = 0; s <= (2 * d) - (2 * abs(i)); s++){
                printf("* ");
            }
            printf("\n");
        }

    }
    return 0;
}


/*
create a program which draws a diamond, like this:
      *
    * * *
  * * * * *
* * * * * * *
* * * * * * *
  * * * * *
    * * *
      *
*/

