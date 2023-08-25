 Question: Create a soft link file using the `symlink` system call

#include <unistd.h> 
#include <stdio.h> 
void main(int argc, char *argv[])
{

    char *filepath;     
    char *softLinkPath; 

    int status; // 0 -> Success, -1 -> Error

    if (argc != 3)
        printf("Enter File path and Symbolic Link File path as the arguments to the program\n");
    else
    {
        filepath = argv[1];
        softLinkPath = argv[2];

        status = symlink(filepath, softLinkPath);

        if (status == -1)
            perror("Error while creating hard link!");
        else
            printf("Successfully created a hard link. Check with the `ll` or `ls -l` command.\n");
    }
}
