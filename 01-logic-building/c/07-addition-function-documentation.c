
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
   Accept first number as no1 
   Accept second number as no2
   Create the variable as ans to store the result
   Perform the addition and store into ans
   Display the result from ans
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

int addition(int iNo1 , int iNo2)
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
    scanf("%d" , &iValue1);

    printf("Enter second number : \n");
    scanf("%d" , &iValue2);

    iResult = addition( iValue1 , iValue2);  
    
    printf("Addition is : %d\n" , iResult);
    
    return 0;
}
