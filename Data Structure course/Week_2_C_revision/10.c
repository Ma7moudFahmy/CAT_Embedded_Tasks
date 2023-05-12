/*Write a C program to input any number from user and check
whether nth bit of the given number is set (1) or not (0) */

#include <stdio.h>

int check_bit(int,int);

int main()
{
    int num=0, bitToCheck=0;
    printf("Enter any number:");
    scanf("%d", &num);

    printf("Enter nth bit to check(0-31):");
    scanf("%d", &bitToCheck);

    int zero_or_one = check_bit(num, bitToCheck);

    printf("The %d bit is set to: %d", bitToCheck, zero_or_one);
    return 0;
}

int check_bit(int n, int bit)
{
    return (n>>bit)&1 ? 1 : 0 ;
}
