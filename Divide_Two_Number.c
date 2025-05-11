#include<stdio.h>

// Function prototype with proper return type and parameter types
int Divide(int iNo1, int iNo2)
{
    int iAns = 0;

    // Check for divide by zero
    if(iNo2 == 0)
    {
        return -1;
    }

    iAns = iNo1 / iNo2;

    return iAns;
}

int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    // Call the Divide function with the correct arguments
    iRet = Divide(iValue1, iValue2);

    // Print the result
    printf("Division is %d", iRet);

    return 0;
}
