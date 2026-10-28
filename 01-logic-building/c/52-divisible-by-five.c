#include <stdio.h>
#include <stdlib.h>

void CheckDivisible(int iNo)
{
    if((iNo % 5) == 0)
    {
        printf("Divisible by 5\n");
    }
    else{
        printf("Not divisible by 5\n");
    }
}

int main(){
    int iValue = 0;
    printf("Enter number : \n");
    scanf("%d", &iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}