/*
    --------------------------------------
                Opeation ||
    --------------------------------------
    Result1     Result2     Final Result
    --------------------------------------
    TRUE        TRUE        TRUE        Short circuit
    TRUE        FALSE       TRUE        Short circuit
    FALSE       FALSE       TRUE
    FALSE       FALSE       FALSE
    --------------------------------------

*/
#include <stdio.h>
#include <stdlib.h>

void CheckDivisible(int iNo)
{
    if(((iNo % 3) == 0) || ((iNo % 5) == 0))
    {
        printf("it is Divisible\n");
    }
    else{
        printf("it is Not divisible\n");
    }
}

int main(){
    int iValue = 0;
    printf("Enter number : \n");
    scanf("%d", &iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}