#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool checkPrime(int iNo)
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
        return true;
    }
    else
    {
        return false;
    }
}

int main(void)
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    bRet = checkPrime(iValue);
    if(bRet)
    {
        printf("It's prime number");
    }
    else
    {
        printf("It's not a prime number");
    }

    return EXIT_SUCCESS;
}
