#include <stdio.h>
#include <stdlib.h>

// int Max (int iNo1 , int iNo2 , int iNo3)
// {
//     if(iNo1 > iNo2){
//         return iNo1;
//     }
//     else if(iNo2 > iNo3){
//         return iNo2;
//     }
//     else{
//         return iNo3;
//     }
// }
int Min (int iNo1 , int iNo2 , int iNo3){
    if( (iNo1 < iNo2) && (iNo1 < iNo3) )
    {
        return iNo1;
    }
    else if( (iNo2 < iNo1) && (iNo2 < iNo3) )
    {
        return iNo2;
    }
    else
    {
        return iNo3;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iResult = 0;

    printf("Enter first number : \n");
    scanf("%d" , &iValue1);

    printf("Enter second number : \n");
    scanf("%d" , &iValue2);

    printf("Enter third number : \n");
    scanf("%d" , &iValue3);

    iResult = Min(iValue1 , iValue2 , iValue3);
    printf("Minimum is : %d\n ", iResult);

    return EXIT_SUCCESS;
}