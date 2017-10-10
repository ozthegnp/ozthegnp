#include <stdio.h>

int main() {
    char char_array[] = {'a', 'b', 'c', 'd'};
    char char_array_the_same[] = "abcd";

    for(int i = 0; i < sizeof(char_array); i++){
        printf("%c", char_array[i]);
    }

    printf("\n");

    for(int j = 0; j < sizeof(char_array_the_same); j++){
        printf("%c", char_array_the_same[j]);
    }
	//TODO:
    // Print out the two arrays character-by-character

	//TODO:
    // What is the difference between the arrays? One is defined by a string the other is by characters

    return 0;
}
