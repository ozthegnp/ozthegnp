#include <stdio.h>

int main() {
    char my_name_array[] = "My Name";

	for (int i = 0; i< sizeof(my_name_array); i++) {
        printf ("%c", my_name_array[i]);
	}
    // Print out the array character-by-character

    return 0;
}
