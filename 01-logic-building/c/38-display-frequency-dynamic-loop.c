#include <stdio.h>
#include <stdlib.h>

void display(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }
    
 
}
int main()
{   
    int iValue = 0;

    printf("Enter frequency : \n");
    scanf("%d", &iValue);

    display(iValue);

    return EXIT_SUCCESS;
}