/*
 * Create a text file with You favourite poem in it. If You don't have one, just take one.
 *
 * Read the poem from the file and print it on the console.
 */

#include <stdlib.h>
#include <stdio.h>

void read_file_fgets(char* file_path);

int main()
{
    char file_name[] = "poem.txt";

    read_file_fgets(file_name);

    return 0;
}
void read_file_fgets(char* file_path) {

    FILE *fh = fopen(file_path, "r");
        if (fh == NULL) {
            printf("The file %s does not exist!", file_path);
            return;
        }

        char line[255];

        while(!feof(fh)){
            fgets(line, 255, fh);
            printf("%s",  line);
        }
        fclose(fh);
}
