#include <stdio.h>
#include <stdlib.h>

int x, y ;
int swap(int *a, int *b);

int main()
{
    printf("Enter two numbers to swap them : \n");
    printf("num 1 = ");
    scanf("%d",&x);
    printf("num 2 = ");
    scanf("%d",&y);

    swap(&x, &y);
    printf("\n now:- \n num 1 = %d \n num 2 = %d",x, y);

    return 0;
}

int swap(int *a, int *b)
{
    int cup;

    cup = *a ;
    *a = *b;
    *b = cup;
}
