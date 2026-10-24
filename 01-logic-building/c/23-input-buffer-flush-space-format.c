#include <stdio.h>
#include <stdlib.h>

int main(){

    char sName[30];
    int iAge = 0;
    float fMarks = 0.0f;

    printf("enter your name : \n");
    scanf("%[^'\n']s" , sName);    //Enter remains in input buffer

    printf("enter your age : \n");
    scanf(" %d" , &iAge);   // by using space before %d it works as flush

    printf("enter your marks : \n");
    scanf("%f" , &fMarks);

    printf("Welcome %s\n", sName);
    printf("your age %d\n", iAge);
    printf("your marks %f\n", fMarks);

    return EXIT_SUCCESS;
}