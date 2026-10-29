#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool checkPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = false;

    for(iCnt = 2, bFlag = true; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            bFlag = false;
            break;
        }
    }
    
    return bFlag;
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
