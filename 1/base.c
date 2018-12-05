#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <error.h>

int main(){
    FILE * f = fopen("./f.txt", "r");
    fseek(f, 0, SEEK_END);
    int size = ftell(f);
    rewind(f);
    char * array = malloc(size);
    //rewind(f);
    //printf("%ld\n", ftell(f));
    
    char * line;
    size_t n = 0;
    ssize_t read;
    int num = 0;
    while( (read = getline(&line, &n, f)) != -1){
        num += atoi(line);
    }

    printf("%d\n", num);


    fclose(f);
    return 0;
}
