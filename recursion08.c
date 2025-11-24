// WAP to reverse a string

#include <stdio.h>

void reverseString(char s[], int n, char revstr[])
{
    if (n == -1)
    {
        printf("%s", revstr);
        return;
    }

    char c = s[n - 1];
    revstr += c;
}

void main()
{
    int length;

    printf("Enter the length of string : ");
    scanf("%d", &length);

    char str[length];

    printf("Enter a string : ");
    scanf("%s", &str);

    char revStr[] = (char)str[length-1];
    reverseString(str, length - 1, revStr);
}