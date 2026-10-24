#include <stdio.h>
#include <stdlib.h>

float Avg (int iNo1 , int iNo2)
{
    float res = 0.0f;
    // Typecasting
    res = ((float) iNo1 + (float) iNo2 )/2;
    return res;
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fResult = 0.0f;

    printf("Enter first number : \n");
    scanf("%d" , &iValue1);

    printf("Enter second number : \n");
    scanf("%d" , &iValue2);

    fResult = Avg(iValue1 , iValue2);
    printf("Average is : %f\n ",fResult);

    return EXIT_SUCCESS;
}