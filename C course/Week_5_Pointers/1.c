#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10;
    printf("x = %d\n",x);

    int *p = &x;
    *p = 20;
    printf("x = %d",x);

    return 0;
}
