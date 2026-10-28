/*
    --------------------------------------
                Opeation &&
    --------------------------------------
    Result1     Result2     Final Result
    --------------------------------------
    TRUE        TRUE        TRUE
    TRUE        FALSE       FALSE
    FALSE       FALSE       FALSE           Short circuit
    FALSE       FALSE       FALSE           Short circuit
    --------------------------------------

*/
#include <stdio.h>
#include <stdlib.h>

void CheckDivisible(int iNo)
{
    if(((iNo % 3) == 0) && ((iNo % 5) == 0))
    {
        printf("it is Divisible by both\n");
    }
    else{
        printf("it is Not divisible by both\n");
    }
}

int main(){
    int iValue = 0;
    printf("Enter number : \n");
    scanf("%d", &iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}