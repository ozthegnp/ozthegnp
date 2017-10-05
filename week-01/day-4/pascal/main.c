#include <stdio.h>

int main()
{
    for(int i = 1; i < 9; i++){
           switch(i) {
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
    return 0;
}
  /*  int d = 4, dl, space;

        for (int a = -d ; a <= d; a++){
            dl = abs(a);
            printf("\n");
                for (space = 1 ; space <= dl; space++ ){
                    printf("* ");
                }
                for(space = -dl+1; space <= dl-1; space++ ){
                    printf("*");
                }
        }

    return 0;
}*/
/*int d = 4, dl, space;

        for (int a = 1 ; a = d ; a++){
            printf("\n");
                for (space = 1 ; space <= 2*d; space++ ){
                    printf("* ");
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

