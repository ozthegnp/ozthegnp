#include <stdio.h>
#define MAX_CHARS 255 // Maximum characters allowed

char most_freq_char(char *str, int size);


int main()
{
    //TODO: write a function which finds the maximum occurrence of a character in a given string.
    //return with the most frequent character
    //the number of occurrence should be an output parameter

    char str[] = "e is the most frequent element.";
    int size = strlen(str);
    printf("most frequent element is: %c\n", most_freq_char(str, size));

    return 0;
}

char most_freq_char(char *string, int size)
{
    int freq = 0;
    int max = 0;
    char freq_ch = ' ';

    for(int i = 0; i < size; i++){
            freq = -1;
        for(int j = 0; j < size; j++){
            if(string[i] == string [j])
                freq++;
            if(freq > max){
                max = freq;
                freq_ch = string[i];
            }

        }

    }
    printf("freq is: %d ", max);
    return freq_ch;
}
