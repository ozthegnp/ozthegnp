/*
 * Read the file You created in the first exercise.
 * Reverse the order of the verses.
 * Write it out in a new file.
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct{ //Creates a struct for each verse
    char verse_arr[50][256];//matrix for each line
    int lines_in_verse;//counts total lines of verse
}verse_s;

void read_file_fgets(char* file_path, char* new_file_path) ;

int main()
{
    char file_name[] = "poem.txt";
    char new_file_name[] = "new_poem.txt";

    read_file_fgets(file_name, new_file_name);

    return 0;
}

void read_file_fgets(char* file_path, char* new_file_path) {

    FILE *fh = fopen(file_path, "r");
    FILE *nfh = fopen(new_file_path, "w");

    if (fh == NULL) {
        printf("The file %s does not exist!", file_path);
        return;
    }

    verse_s verse[6];

    char line[256];
    int verse_count = 0;
    int line_count = 0;

    while(!feof(fh)){
        fgets(line, 256, fh);
        strcpy(verse[verse_count].verse_arr[line_count], line);//puts each line in the struct matrix
        line_count++;
        verse[verse_count].lines_in_verse = line_count - 1;//keeps track of total lines verse

        if(strcmp(line, "\n") == 0){
            verse_count++;
            line_count = 0;
        }
    }

    for(int i = verse_count; i > -1; i--){ //reverses verses order
        for(int j = 0; j < verse[i].lines_in_verse; j++){
            fputs(verse[i].verse_arr[j], nfh);
        }
        fputs("\n", nfh);

    }


    fclose(fh);
    fclose(nfh);

}
