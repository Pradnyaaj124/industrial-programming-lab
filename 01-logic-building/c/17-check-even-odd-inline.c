#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    if((iValue % 2) == 0)
    {
        printf("It's an even number \n");
    }
    else
    {
        printf("It's an odd number \n");
    }

    return EXIT_SUCCESS;
}