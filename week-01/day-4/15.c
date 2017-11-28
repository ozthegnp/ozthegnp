#include <stdio.h>
#include <stdlib.h>

/*
Create a program which can tell how to pay an exact amount of money
for example 45670 Ft, is the amount (store this as an integer)
and the output should be:
2-20000Ft
1-5000Ft
1-500Ft
1-100Ft
1-50Ft
1-20Ft
*/

/*
Take care of the rounding (when giving back 5 coins):
1, 2 - 0 down
3, 4 - 5 up
6, 7 - 5 down
8, 9 - 0 up
*/

int main()
{
    int aom = 57544;

    int deak = 20000, istv = 10000, koss =5000, beth = 2000, maty = 1000, rako = 500;
    int kets = 200, szaz = 100, otven = 50, husz = 20, tiz = 10, ot = 5;

printf("Amount due %dFt\n", aom);
      switch(aom % 10){
            case 1:
            case 2:
                aom = aom - (aom % 10);
                break;
            case 3:
            case 4:
                aom = aom - ((aom % 10)-5);
                break;
            case 6:
            case 7:
                aom = aom - ((aom % 10)-5);
                break;
            case 8:
            case 9:
                aom = aom - ((aom % 10)-10);
                break;
            default:
                aom = aom;

        }
printf("After rounding: %dFt\n\n",aom);
printf("Pay your amount due with these bills: \n");


            (aom/deak > 0 ? printf(" %d-%dFt\n",aom/deak, deak):0);
            aom = (aom % deak) - (aom/deak);

            (aom/istv > 0 ? printf(" %d-%dFt\n",aom/istv, istv):0);
            aom = (aom % istv) - (aom/istv);

            (aom/koss > 0 ? printf(" %d-%dFt\n",aom/koss, koss):0);
            aom = (aom % koss) - (aom/koss);

            (aom/beth > 0 ? printf(" %d-%dFt\n",aom/beth, beth):0);
            aom = (aom % beth) - (aom/beth);

            (aom/maty > 0 ? printf(" %d-%dFt\n",aom/maty, maty):0);
            aom = (aom % maty) - (aom/maty);

            (aom/rako > 0 ? printf(" %d-%dFt\n",aom/rako, rako):0);
            aom = (aom % rako) - (aom/rako);

            (aom/kets > 0 ? printf(" %d-%dFt\n",aom/kets, kets):0);
            aom = (aom % kets) - (aom/kets);

            (aom/szaz > 0 ? printf(" %d-%dFt\n",aom/szaz, szaz):0);
            aom = (aom % szaz) - (aom/szaz);

            (aom/otven > 0 ? printf(" %d-%dFt\n",aom/otven, otven):0);
            aom = (aom % otven) - (aom/otven);

            (aom/husz > 0 ? printf(" %d-%dFt\n",aom/husz, husz):0);
            aom = (aom % husz) - (aom/husz);

            (aom/tiz > 0 ? printf(" %d-%dFt\n",aom/tiz, tiz):0);
            aom = (aom % tiz) - (aom/tiz);

            (aom/ot > 0 ? printf(" %d-%dFt\n",aom/ot, ot):0);
            aom = (aom % ot) - (aom/ot);

    return 0;
}
