#include<getopt.h>
#include<stdio.h>
#include<stdlib.h>

/*the name of this program*/
const char* program_name;

/*prints usage information for this program to STREAM (stdout or stderr) and exit the program with
EXIT_CODE. Does not return*/

void print_usage(FILE* stream, int exit_code)
{
    fprintf(stream, "Usage: %s options [inputfile...]\n", program_name);
    fprintf(stream,
            " -h --help Display this usage information.\n"
            " -o --output filename Write output to file.\n"
            "-v --verbose Print verbose messages.\n");
    exit(exit_code);
}

/*main program entry point. argc contains number of args list and argv is an array of pointers to char.*/

int main(int argc, char* argv[])
{
    int next_option;
    
    /* a string listing valid short options letter.*/
    const char* const short_options = "ho:v";

    /* an array describing valid long options*/
    const struct option long_options[] = {
        {"help", 0, NULL, 'h'},
        {"output", 1, NULL, 'o'},
        {"verbose", 0, NULL, 'v'},
        {NULL, 0, NULL, 0}
    };

    /* name of the file to receive program output or null for std output*/
    const char* output_filename = NULL;

    int verbose = 0;

    /*remember the name of the program to incorporate in message*/
    program_name = argv[0];

    do
    {
        /* code */
        next_option = getopt_long(argc, argv, short_options, long_options, NULL);
        switch(next_option)
        {
            case 'h': /*-h or --help*/
            print_usage(stdout, 0)
        }
    } while (/* condition */);
    

}