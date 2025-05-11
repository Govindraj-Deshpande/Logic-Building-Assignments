#include <stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
    printf("\n");
}

int main()
{
    // int iValue = 0; // iValue is initialized but not used in the provided main
    int iValue = 5;   // iValue is directly assigned 5

    Accept(iValue);

    return 0;
}
