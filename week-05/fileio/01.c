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
        if (fh == NULL) {
            printf("The file %s does not exist!", file_path);
            return;
        }

        char ch, prev_ch;

        int line_counter = 0;
        int char_counter = 0;
        int char_counter_nospace = 0;
        int verse_counter = 1;

        while(!feof(fh)){
            ch = fgetc(fh);
            putchar(ch);
            char_counter++;
            if(ch != ' ')
                char_counter_nospace++;
            if(ch == '\n'){
                line_counter++;

                if(prev_ch == '\n'){
                    verse_counter++;
                }
            }
            prev_ch = ch;
        }

        printf("\n\ntotal lines: %d\n", line_counter);
        printf("total characters: %d\n", char_counter);
        printf("total characters w/o spaces: %d\n", char_counter_nospace);
        printf("total verses: %d\n", verse_counter);

        fclose(fh);
}
