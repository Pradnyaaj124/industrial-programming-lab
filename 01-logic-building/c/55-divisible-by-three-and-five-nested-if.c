#include <stdio.h>
#include <stdlib.h>

void CheckDivisible(int iNo)
{
    if(((iNo % 3) == 0))

    {   if(((iNo % 5) == 0))
        {
            printf("it is Divisible\n");
        }
        else
        {
            printf("it is Not divisible by both\n");
        }
    }
    
    else
    {
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