
/*
    step 1: Understand the problem statement 
    step 2: Write the algorithm
    step 3: Decide the programming language
    step 4: Write the program
    step 5: Test the program
*/

//////////////////////////////////////////////////////////////////////
//
//  Step 1: Understand the problem statement - 
//          User is going to enter any two integers and 
//          we have to perform addition
//
//////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////
//
//  Step 2: Write the algorithm- 
/*        
START
   accept first number as no1 
   accept second number as no2
   create the variable as ans to store the result
   perform the addition and store into ans
   display the result from ans
END   
*/

//////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////
//
//   Step 3: Decide the programming language
//           we select C programming
//
//////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////
//
//   Step 4: Write the program
//
//////////////////////////////////////////////////////////////////////     

#include<stdio.h>
int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter first number :\n");
    scanf("%d" , &iValue1);

    printf("Enter second number : \n");
    scanf("%d" , &iValue2);

    iResult = iValue1 + iValue2;  // Business Logic

    printf("Addition is : %d\n" , iResult);
    
    return 0;
}
