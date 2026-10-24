#include <stdio.h>
#include <stdlib.h>

int main(){

    char sName[30];
    printf("enter your name : \n");
    scanf("%s" , sName);
    printf("Welcome %s\n", sName);

    return EXIT_SUCCESS;
}