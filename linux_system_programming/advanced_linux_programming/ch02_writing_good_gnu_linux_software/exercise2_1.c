#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("The name of this program is '%s'\n", argv[0]);
    printf("This program was invoked with %d arguments\n", argc);

    /*were any command line arguments specified?*/
    if (argc > 1)
    {
        /*yes print them*/
        int i;
        printf("The arguments are:\n");
        for (i = 1; i < argc; ++i)
        {
            printf("%s\n", argv[i]);
        }
    }
    return 0;
}