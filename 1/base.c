#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <error.h>

int main(){
    FILE * f = fopen("./f.txt", "r");
    fseek(f, 0, SEEK_END);
    int size = ftell(f);
    //rewind(f);
    printf("%ld\n", ftell(f));
    

    

    fclose(f);
    return 0;
}
