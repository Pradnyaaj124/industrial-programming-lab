// inp = 5
// 1+2+3+4+5 = 15
#include <stdio.h>
#include <stdlib.h>

// void sum( int iNo)
// {
//     int iCnt = 0;
//     int sum = 0;
    
//     for(iCnt = 1; iCnt <= iNo; iCnt++)
//     {
//         sum = sum + iCnt;
//         printf("%d+" , iCnt);
//     }
//     printf("%s %d" , "=" , sum);
//     printf("\n");
 
// }
int main()
{   
    int iCnt = 0;
    int iSum = 0;

    iCnt = 1;

    // iSum = 0 + 1
    iSum = iSum + iCnt;
    iCnt++; // 2

    // iSum = 1 + 2
    iSum = iSum + iCnt;
    iCnt++; //3

    // iSum = 3 + 3
    iSum = iSum + iCnt;
    iCnt++;  //4

    // iSum = 6 + 4
    iSum = iSum + iCnt;
    iCnt++;  //5

    printf("%d\n" , iSum);

    return EXIT_SUCCESS;
}