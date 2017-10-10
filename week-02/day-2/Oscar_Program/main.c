#include <stdio.h>
    //TODO:
    // Print out the content of the arrays
int main() {
    int int_array[] = {1, 654, 987, 654, 31};
    float float_array[] = {1.2, 3.14, 1.41, 0.707, 1.73};

    for(int i = 0; i < sizeof(int_array)/sizeof(int_array[0]); i++) {
        printf("%d ", int_array[i]);
    }
    printf("\n");
    for(int j = 0; j < sizeof(float_array)/sizeof(float_array[0]); j++) {
        printf("%.2f ", float_array[j]);
    }


    return 0;
}
