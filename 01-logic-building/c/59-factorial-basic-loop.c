#include <stdio.h>
#include <stdlib.h>

int factorial(int iNo)
{
    int iCnt = 0 , iFact = 0;

    iFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact *= iCnt;
        
    }
    return iFact;
}
int main(){
    int iValue = 0 , iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = factorial(iValue);
    printf("Factorial is : %d\n", iRet);

    return EXIT_SUCCESS;
}