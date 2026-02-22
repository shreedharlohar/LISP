#include <stdio.h>

static char input[2048];

int main(int argc, char** argv){
    puts("lispy version 0.0.0.1");
    puts("Enter ctrl+c to exit \n");

    while(1){
        fputs("lipsy>",stdout);
        fgets(input, 2048, stdin);
        printf("No youre a %s", input);
        if (input == "q"){
            printf("got it");
            break;
        }
    }

    return 0;
}