#include <stdio.h>
#include <stdlib.h>



void main()
{
    char word[] = "alukikulni";

    int a = 5;
    for (int i = 0; i <= strlen(word)-a; i++){
        int check = 0;
        for (int z = 0; z < a\2 ;z++) {
            for(int j = i; j < i+a/2; j++) {
                        printf("----i =%d  j = %d /%d", i, j, a + i - 1-f);
                        printf("%c", word[j]);
                        printf("%c", word[a + i - 1-f]);
                        printf("\n");
                        if(word[j] == word[a + i - 1-f]) {
                            check++;
                        }
            }
        }
        printf("\n");
        if(check == a/2){
                    for (int k = i; k < i+a; k++){
                        printf("%c", word[k]);
                    }
                    printf("\n");

        }

    }
}
