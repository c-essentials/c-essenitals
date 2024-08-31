/*
Copyright 2024 Extraskilled56
Refer to LICENCE.txt for more info.
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#define include_path "/usr/include"

/*Checks if file exists*/
bool check_file_exists(char *filename) {
    FILE *file;
    if ((file = fopen(filename, "r"))) {
        fclose(file);
        return true;
    }
    return false;
}

/*Using modes, installs a header library to gcc include folder*/
void hinstall(char *mode, char *path, char *name) {
    if (strcmp(mode, "curl") == 0) {
        char curl_command[100];
        sprintf(curl_command, "cd ~ && curl %s -o tmp.h && sudo mv tmp.h %s/%s", path, include_path, name);
        system(curl_command);
    }
    if (strcmp(mode, "file") == 0) {
        char file_command[100];
        sprintf(file_command, "sudo mv %s %s/%s", path, include_path, name);
        system(file_command);
    }
}