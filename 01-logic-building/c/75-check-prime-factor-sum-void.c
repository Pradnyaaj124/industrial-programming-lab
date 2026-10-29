#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void checkPrime(int iNo)
{
    int iCnt = 0;

    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;

        }
    }
    if( iSum == 1)
    {
        printf("it is prime number");
    }
    else
    {
        printf("it is not a prime number");
    }
}

int main(void)
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    checkPrime(iValue);

    return EXIT_SUCCESS;
}
