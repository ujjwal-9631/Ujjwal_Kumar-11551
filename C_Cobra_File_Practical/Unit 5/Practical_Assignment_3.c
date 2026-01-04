#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50], str2[50], str3[50];
    int length, result;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    // strlen
    length = strlen(str1);
    printf("\nLength of first string = %d\n", length);

    // strcpy
    strcpy(str3, str1);
    printf("Copied string (str3) = %s\n", str3);

    // strcat
    strcat(str1, str2);
    printf("Concatenated string = %s\n", str1);

    // strcmp
    result = strcmp(str2, str3);

    if (result == 0)
        printf("str2 and str3 are equal\n");
    else
        printf("str2 and str3 are not equal\n");

    return 0;
}
