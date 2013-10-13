#include <stdio.h>
#include <stdlib.h>

//Improper cast to int from char 
// Mac x64 no fail
// Ubuntu 32bits do fails
int main() {
    char i = 0;
    char j = 0;
    int* p = (int *)&i; 
    fprintf(stdout,"hola\ti: %d\tj: %d\tp: %d\n",i,j,*p);
    *p = -1;
    fprintf(stdout,"hola\ti: %d\tj: %d\tp: %d\n",i,j,*p);
    return EXIT_SUCCESS;
}
