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
            
            add_task(array_size, input_task, task[]);

            
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
        }else if(strcmp(input_operator, "-u") == 0){
            usage();
            
        }
    }
    return 0;
}
