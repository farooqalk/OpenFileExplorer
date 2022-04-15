#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{

    // If 1 argument is supplied, then open the supplied directory
    if (argc == 2)
    {
        // printf("The argument supplied is %s\n", argv[1]);

        // First part of the command is always the same
        char exp[] = "explorer.exe ";
        // Create a new char array that has the size of the command, and supplied directory
        char target[sizeof exp + sizeof argv[1]];
        // Copies contents of foo to target buffer
        strcpy(target, exp);
        // Appends contents of bar to target buffer
        strcat(target, argv[1]);
        // Run the command
        system(target);
    }
    else if (argc > 2)
    {
        printf("Too many arguments supplied.\n");
    }
    // If no arguments are supplied, open the current directory in file explorer
    else
    {
        // First part of the command is always the same
        char exp[] = "explorer.exe ";
        // Open the current directory
        char cwd[] = "%cd%";
        // Create a new char array that has the size of the command, and supplied directory
        char target[sizeof exp + sizeof cwd];
        // Copies contents of foo to target buffer
        strcpy(target, exp);
        // Appends contents of bar to target buffer
        strcat(target, cwd);
        // Run the command
        system(target);
    }
    return 0;
}