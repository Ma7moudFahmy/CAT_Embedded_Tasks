#include <stdio.h>
#include <stdlib.h>

int fibo(int x);

int main()
{
    int num;
    printf("Enter any number to get Fibonacci of it : \n");
    scanf("%d",&num);
    printf("The Fibonacci of %d is %d",num,fibo(num));
    return 0;
}

int fibo(int x)
{
    if(x==0)
        return 0;
    else if(x==1)
        return 1;
    else
        return fibo(x-1)+fibo(x-2);
}
