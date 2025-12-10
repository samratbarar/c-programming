// WAP to implement strlen (), strcat (),strcpy() using the concept of Functions.

# include <stdio.h>

int StrLen(char s[])
 {
    int i = 0;
    while(s[i] != '\0'){
        i++;
    }
    return i;
 }

void strCat(char des[], char src[])
{
    int len = StrLen(des), j=0, i;
    for (i = len; src[j] != '\0' ; i++)
    {
        des[i] = src[j];
        j++;
    }
    des[i] = '\0';
}
void strCpy(char des[], char src[])
{
    int i;
    for (i = 0; src[i] != '\0' ; i++)
    {
        des[i] = src[i];
    }
    des[i] = '\0'; 
}

void main()
{
    char str1[100], str2[100], str3[100];

    // implementation of strlen()

    printf("Enter the string : ");
    scanf("%99[^\n]", str1);
    getchar();

    int slen = StrLen(str1);

    printf("Length of string is : %d\n",slen);

    // implementation of strcat()

    printf("Enter another string : ");
    scanf("%99[^\n]", str2);
    getchar();
    
    strCat(str2, str1);

    printf("After appling strcat function string = %s \n",str2);

    // implementation of strcpy()

    strCpy(str3, str1);
    
    printf("String after appling strcpy function = %s ", str3);
}