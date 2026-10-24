#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////
//
//  Function name :  Addition
//  Input         :  Integer, Integer
//  Output        :  Integer
//  Description   :  Performs Addition
//  Date          :  04/10/2026
//  Author        :  Pradnya Ajay Jadhav
//
//////////////////////////////////////////////////////////////////////

int addition(
                int iNo1,   // First input
                int iNo2    // Second input
            )
{
    int iAns = 0;
    iAns = iNo1 + iNo2;  // Business Logic

    return iAns;
    
}

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

//////////////////////////////////////////////////////////////////////
//
//  Step 5: Test the program
//
//  Tested test cases
//---------------------------------------------------
//  Input1    Input2    Output
//---------------------------------------------------
//    10        11        21
//    11         0        11
//     0        11        11
//    20        -9        11   
//   -20       -10       -30
//////////////////////////////////////////////////////////////////////
