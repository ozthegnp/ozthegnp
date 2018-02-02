//
//  main.c
//  play
//
//  Created by Oz on 1/31/18.
//  Copyright © 2018 Oscar Inc. All rights reserved.
//

#include <stdio.h>
#include <string.h>


int main(int argc, const char * argv[]) {
    
    char string_array[20][1024];
    int array_position = 0;
    char string[] = "Oscar vagyok\r\n\r\nNorbi vagyok\r\n\r\n1\r\n\r\nIgy kezdokdik el,";
    char string2[] = " es igy folytatodik\r\n\r\nNorbi vagyok\r\n\r\nFaszom\r\n\r\nGecyi\r\n\r\n";
    int flag = 0;
    char *position;
    int index = 0;
    printf("%s\n", string);
    position = strstr(string, "\r\n\r\n");

        while( position != 0){
            

        index = (int)(position - string);
       
        strncpy(string_array[array_position], string, index);
        string_array[array_position][index] = '\0';
            if(flag == 1){
                strcat(string_array[array_position - 1 ], string_array[array_position]);
                array_position--;
                flag = 0;
            }

        printf("%d\n", index);
        printf("string array[%d]: %s\n", array_position, string_array[array_position]);
        
        memmove(&string[0], &string[index + 4], strlen(string));
        printf("Remainder string: %s\n", string);
        array_position++;
        position = strstr(string, "\r\n\r\n");
            if(position == NULL){
                flag = 1;
                strcpy(string_array[array_position], string);
                array_position++;
            }

        }
    
    printf("-------------------------------\n");
    position = strstr(string2, "\r\n\r\n");

    while( position != 0){
        
        
        index = (int)(position - string2);
        
        strncpy(string_array[array_position], string2, index);
        string_array[array_position][index] = '\0';
        if(flag == 1){
            strcat(string_array[array_position - 1 ], string_array[array_position]);
            array_position--;
            flag = 0;
        }
        
        printf("%d\n", index);
        printf("string array [%d]: %s\n", array_position, string_array[array_position]);
        
        memmove(&string2[0], &string2[index + 4], strlen(string2));
        printf("Remainder string: %s\n", string2);
        array_position++;
        position = strstr(string2, "\r\n\r\n");
       
    }
}
