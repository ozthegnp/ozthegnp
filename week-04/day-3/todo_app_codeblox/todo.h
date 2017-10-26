
//
//  tasks.h
//  todo_app
//
//  Created by Oz on 10/26/17.
//  Copyright © 2017 Oscar Mateo. All rights reserved.
//

#ifndef tasks_h
#define tasks_h
void usage();

typedef struct{
    char name[256];
    int status;
}task_s;

enum todo {ADD, WRT, RED, LST, EMP, REM, CMP, PRI, LSP};

void add_task(int *size, char input_task, task_s *task[]);
void create_file(char* file_path, int size, task_s task[]);


#endif /* tasks_h */
