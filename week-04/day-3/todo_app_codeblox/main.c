//
//  main.c
//  todo_app
//
//  Created by Oz on 10/26/17.
//  Copyright © 2017 Oscar Mateo. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "todo.h"

void read_file_fscanf(char* file_path, int size, task_s *task);

int main() {

    task_s task[10];

    char command[256];
    char *input_operator;
    char *input_task = ""; // gets command input and splits it to operator an task

    int array_size = 0; //Keeps track of array size

    while(strcmp(command, "exit") != 0){

        gets(command);

        input_operator = strtok(command, " ");
        input_task = strtok(NULL,"\n"); // spliting with tokenizing

        if(strcmp(input_operator, "-a") == 0){

            if (input_task != NULL){
                strcpy(task[array_size].name, input_task);
                array_size++;
            } else
                printf("No task is provided\n");

           // add_task(array_size, input_task, task[]);


        } else if(strcmp(input_operator, "-l") == 0){

            if (array_size == 0)
            printf("todo is empty\n");
            else {
                for(int i = 0; i < array_size; i++){
                    printf("[%d] - %s\n", i + 1, task[i].name);
                }
            }

        } else if(strcmp(input_operator, "-e") == 0){

            array_size = 0;

        } else if(strcmp(input_operator, "-rm") == 0){

            for(int i = atoi(input_task); i < array_size; i++){
                strcpy(task[i-1].name, task[i].name);
            }
            array_size--;
        } else if(strcmp(input_operator, "-u") == 0){
            usage();

        } else if(strcmp(input_operator, "-wr") == 0){
                char file_name[] = "todo.txt";
                create_file(file_name, array_size, task);

        } else if(strcmp(input_operator, "-rd") == 0){
                char file_name[] = "todo.txt";
            read_file_fscanf(file_name, array_size, &task);        }

    }
    return 0;
}

void read_file_fscanf(char* file_path, int size, task_s *task) {
    /*FILE *fh = fopen(file_path, "r");

    if (fh == NULL) {
        printf("The file %s does not exist!", file_path);
        return;
    }

    char line[256];

    fgets(line, 255, fh);
    printf("line is %s\n", line);

    close(fh);*/

    task[0].name = "hello";

   /* char *ptr;
    ptr = strtok(line, " ");

    while(ptr != NULL){
    printf("ret is %s\n", ptr);

    ptr = strtok(NULL, " ");
    }*/



    /*while(ret != NULL){
    *ret = '\0';
    printf("ret is %s\n", ret);
    ret++;

    ret = strchr(ret, ' ');
    }*/


}
