#include <stdio.h>
#include <stdlib.h>

void checkEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        printf("It's an even number \n");
    }
    else
    {
        printf("It's an odd number \n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    checkEven(iValue);

    return EXIT_SUCCESS;
}