#include <stdio.h>
#include <stdlib.h>

int GetDigits(int num) ;


int main()
{
    int num ;
    printf("Enter a number to get its digits : \n");
    scanf("%d",&num);
    printf("The number of digits of %d is %d",num,GetDigits(num));

    return 0;
}

int GetDigits(int num)
{
    int count=0 ;
    while(num)
    {
        num/=10;
        count++;
    }
    return count ;
}

