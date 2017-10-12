#include <stdio.h>
#include <stdlib.h>

int palsearchf(char word[]);

void main()
{
    char word[]="lolol";
    for(int i = 3; i<= strlen(word); i++){
        char subword[i];
            for(int j = 0; j <= strlen(word)-i; j++){
                    for(int k = 0; k < i;k++){
                        subword[k] = word[k+j];
                    }
                    puts(subword);
                    printf("%d\n", palsearchf(subword));
            }

    }
     if (palsearchf(word))
        printf("Yes");
     else
        printf("No");
}

int palsearchf(char word[])
{
    int check = 0;
    for(int i = 0; i < strlen(word); i++){
            if(word[i] == word[strlen(word) - 1 - i]){
                check++;
            }
    }
    if(check == strlen(word))
        return 1;
    else
        return 0;
}
