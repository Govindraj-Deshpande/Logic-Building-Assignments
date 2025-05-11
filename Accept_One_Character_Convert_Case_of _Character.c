#include <stdio.h>

void DisplayConvert(char cValue)
{
    if (cValue >= 'a' && cValue <= 'z')
    {
        printf("%c", cValue - 32); // Convert lowercase to uppercase
    }
    else if (cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c", cValue + 32); // Convert uppercase to lowercase
    }
    else
    {
        printf("%c", cValue); // If not an alphabet, print as is
    }
    printf("\n");
}

int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}