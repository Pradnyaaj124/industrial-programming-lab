#include "Header.h"
//////////////////////////////////////////////////////////////////////
//
//  Entry point of the Applicationn
//
//////////////////////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter first number :\n");
    if(scanf("%d" , &iValue1) != 1){

        fprintf(stderr, "Unable to proceed as input is inavlid\n");

        return EXIT_FAILURE;
    }

    printf("Enter second number : \n");
    if(scanf("%d" , &iValue2) != 1){

        fprintf(stderr, "Unable to proceed as input is inavlid\n");
        
        return EXIT_FAILURE;
    }

    iResult = addition( iValue1 , iValue2);  
    
    printf("Addition is : %d\n" , iResult);
    
    return EXIT_SUCCESS;
}
