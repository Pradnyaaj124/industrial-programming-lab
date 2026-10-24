#include <stdio.h>
#include <stdlib.h>

int Min (int iNo1 , int iNo2 , int iNo3 , int iNo4){
    if( (iNo1 < iNo2) && (iNo1 < iNo3) && (iNo1 < iNo4))
    {
        return iNo1;
    }
    else if( (iNo2 < iNo1) && (iNo2 < iNo3) && (iNo2 < iNo4))
    {
        return iNo2;
    }
    else if( (iNo3 < iNo1) && (iNo3 < iNo2) && (iNo3 < iNo4))
    {
        return iNo3;
    }
    else{
        return iNo4;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iValue4 = 0;
    int iResult = 0;

    printf("Enter first number : \n");
    scanf("%d" , &iValue1);

    printf("Enter second number : \n");
    scanf("%d" , &iValue2);

    printf("Enter third number : \n");
    scanf("%d" , &iValue3);

    printf("Enter fourth number : \n");
    scanf("%d" , &iValue4);

    iResult = Min(iValue1 , iValue2 , iValue3 , iValue4);
    printf("Minimum is : %d\n ", iResult);

    return EXIT_SUCCESS;
}