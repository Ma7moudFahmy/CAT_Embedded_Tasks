#include <stdio.h>
#include <stdlib.h>

int sum(int *x,int *y)
{
    return *x + *y;
}

int main()
{
    int x,y;

    printf("Enter the 2 values : \n");
    scanf("%d %d",&x,&y);

    printf("Result = %d", sum(&x,&y));

    return 0;
}
