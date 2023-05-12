/*Write a C program to input a number and
calculate sum of digits*/

#include <stdio.h>

int main()
{
    int num=0, sum=0;
    printf("Enter a number : ");
    scanf("%d", &num);

    while(num!=0)
    {
        sum+=num%10;
        num/=10;
    }
    printf("Sum of digits = %d",sum);
    return 0;
}
