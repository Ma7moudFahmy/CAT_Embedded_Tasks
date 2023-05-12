//Write C Program to Copy String Without Using strcpy().

#include <stdio.h>

int main()
{
    char str[] = "I love CAT";
    char copyStr[50];

    int i=0;
    while(str[i]!='\0')
    {
        copyStr[i]=str[i];
        i++;
    }
    copyStr[i]='\0';

    printf("Original string : ");
    puts(str);
    printf("Copied string : ");
    puts(copyStr);

    return 0;
}
