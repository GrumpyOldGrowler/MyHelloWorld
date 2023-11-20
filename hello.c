#include <stdio.h>


void main (void) {
    int i;


    printf("Hello World\n");

    for (i = 10; i < 16; i++){
        
        //printf("\e[1A");
        printf("\e[%d;%dH",i, i+10);
        printf("i == %d", i);
    }
        
    printf("\n");
}
