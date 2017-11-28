/*
 * Take the file You created in the previous exercise.
 * Read it again and write some statistics about it:
 *    * How many lines
 *    * How many characters (with and without spaces)
 *    * How many verses does it have
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
    FILE *nfh = fopen("new_poem", "w");

        if (fh == NULL) {
            printf("The file %s does not exist!", file_path);
            return;
        }

        char line[256];
        char line_arr[50][256];
        int i = 0;


        while(!feof(fh)){
            fgets(line, 256, fh);
            strcpy(line_arr[i], line);
            i++;

        }

        for(int j = i; j > 0; j--)
            fputs( line_arr[j], nfh);

        fclose(fh);
        fclose(nfh);

}
