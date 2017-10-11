#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void anagrammafinder(char anag1[], char anag2[]);


void main ()
{
    char word1[] = "go34d";
    char word2[] = "dog";


    for(int i = 0; i < sizeof(word1); i++) {
       for(int j = 0; j < sizeof(word2);j++) {
            if(word1[i] == word2[j]) {
                word1[i] = 0;
                word2[j] = 0;
            }
       }
    }
    int ang_check = 0;
    for(int i = 0; i < sizeof(word1); i++) {
       for(int j = 0; j < sizeof(word2);j++) {
            if(word1[i] != 0 || word2[j] != 0) {
                ang_check++;
            }
       }
    }
    printf("anfchk %d\n", ang_check);


    /*int result = 0;
    for(int j = 0; j < 6; j++){
    result += word1[j];
    printf("%d", result);
    }

    printf("%d\n", sizeof(word1));*/


   /* for (int i = 0; i < sizeof(word1); i++) {
        for(int j = 0; j < sizeof(word2); j++){
           if(word1[i] == word2[j]){
                for( int k = i; k < sizeof(word1); k++){
                    word1[k] = word1[k+1];
                }
                for( int l = i; l < sizeof(word1); l++){
                    word2[l] = word2[l+1];
                }
           }
        }
    }
    puts(word1);
    puts(word2);*/

}

void anagrammafinder(char anag1[], char anag2[])
{

}
