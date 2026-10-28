
#include <stdio.h>
#include <stdlib.h>

int summation( int iNo)
{
    int iCnt = 0;
    int iSum = 1;
    iSum = 1;
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iSum = iSum * iCnt;
    }
    return iSum;
 
}
int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = summation(iValue);

    printf("summation is : %d\n", iRet);
    return EXIT_SUCCESS;
}