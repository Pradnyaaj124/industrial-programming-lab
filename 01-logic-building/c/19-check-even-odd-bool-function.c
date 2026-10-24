#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool checkEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    bool bRet = false;
    bRet = checkEven(iValue);
    if(bRet == true){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    

    return EXIT_SUCCESS;
}