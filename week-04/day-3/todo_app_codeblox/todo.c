//
//  tasks.c
//  todo_app
//
//  Created by Oz on 10/26/17.
//  Copyright © 2017 Osacar. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "todo.h"

void usage()
{
    printf("Todo application\n"
           "====================\n"
           "Commands:\n"
           "-a\tAdds a new task\n"
           "-wr\tWrite current todos to file\n"
           "-rd\tRead todos from a file\n"
           "-l\tLists all the tasks\n"
           "-e\tEmpty the list\n"
           "-rm\tRemoves a task\n"
           "-c\tCompletes a task\n"
           "-p\tAdd priority to a task\n"
           "-l\tLists all the tasks by priority\n");
}

/*void add_task(int *size, char input_task, task_s *task[])
{
    if (input_task != NULL){
        strcpy(task[size]->name, input_task);
        size++;
    } else
        printf("No task is provided\n");
}*/

void create_file(char* file_path, int size, task_s task[]) {
    FILE *fh = fopen(file_path, "w+");
    if (fh == NULL) {
        printf("Could not create file: %s", file_path);
        return;
    }
    for(int i = 0; i < size;i++){
    fprintf(fh, "%d %s\n", i+1, task[i].name);
    }

    fclose(fh);
}
