#include <stdio.h>
#include <stdlib.h>



void main()
{
    char word[] = "dog goat duck doodle never";

    for (int a = 3; a < strlen(word); a++) {
        for (int i = 0; i <= strlen(word)-a; i++) {
            int check = 0;
            for(int j = i; j < i+a/2; j++){
                if(word[j] == word[2 * i + a - 1- j]){
                    check++;
                }
            }
            if(check == a/2) {
                for (int k = i; k < i+a; k++){
                    printf("%c", word[k]);
                }
                printf(" ");
            }
        }
    }
}
