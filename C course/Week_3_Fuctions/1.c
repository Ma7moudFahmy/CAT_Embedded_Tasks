#include <stdio.h>
#include <stdlib.h>

int Get_Max(int a, int b );

int main()
{
    int x, y, max;

    printf("---MaxNumber Program---\n");
    printf("Enter two numbers : \n");
    scanf("%d %d",&x,&y);

    max = Get_Max(x,y);
    if(max)
        printf("The Maximum number is : %d",max);
    else
        printf("The two numbers are equal!");

    return 0;
}

int Get_Max(int a, int b)
{
    int max ;

    if (a>b)
        max = a ;
    else if ( b> a)
        max = b ;

    return max ;
}

