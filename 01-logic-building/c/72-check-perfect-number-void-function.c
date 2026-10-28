#include <stdio.h>
#include <stdlib.h>

void CheckPerfect(int iNo)
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
    if(iSum == iNo)
    {
        printf("It's a perfect number\n");
    }
    else{
        printf("It's not a perfect number\n");
    }
}
int main(){
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    CheckPerfect(iValue);

    return EXIT_SUCCESS;
}

// Time complexity : O(N/2)