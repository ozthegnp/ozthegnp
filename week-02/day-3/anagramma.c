#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main ()
{
    char word1[] = "god";
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
    if(ang_check == 0)
        printf("It is an anagram!");
    else
        printf("Not an anagram!");

    }
