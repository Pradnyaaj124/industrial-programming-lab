// 4 3 2 1
#include <stdio.h>
#include <stdlib.h>

void display( int iNo)
{
    int iCnt = 0;
    
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t" , iCnt);
    }
    printf("\n");
 
}
int main()
{   
    int iValue = 0;

    printf("Enter frequency : \n");
    scanf("%d", &iValue);

    display(iValue);

    return EXIT_SUCCESS;
}