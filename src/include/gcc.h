/*
Copyright 2024 Extraskilled56
Refer to LICENCE.txt for more info.
*/

#include <stdio.h>
#include <stdlib.h>

/*Compile c programs with gcc*/
void compile(char *path[100], char *args[50]) {
    char gcc_cmd[180];
    sprintf(gcc_cmd, "gcc %c %c", path, args);
    system(gcc_cmd);
}
