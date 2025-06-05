#include <stdio.h>
#include <string.h>

#define MAXLINE 1024

int main(int argc, char *argv[]){

    if (argc < 2) {
        fprintf(stderr, "Usage: %s <pattern>\n", argv[0]);
        return 1;
    }

    char *pattern = argv[1];

    char line[MAXLINE];
    FILE *fp = (argc > 2) ? fopen(argv[2], "r") : stdin;

    if(!fp){
        perror("fopen");
        return 1;
    }

    while(fgets(line, MAXLINE, fp)){
        if(strstr(line, pattern)){
            fputs(line, stdout);
        }
    }

    if(fp != stdin){
        fclose(fp);
    }

    return 0;



}