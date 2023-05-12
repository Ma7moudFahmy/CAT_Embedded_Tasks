/*Write a C program to take any number from user and count
the total number of zeros (0s) and ones (1s)*/

#include <stdio.h>

int main()
{
    int num=0, totalZero_bits=0, totalOne_bits=0;
    printf("Enter any number : ");
    scanf("%d", &num);

    for(int bits_count=0; bits_count<32; bits_count++)
    {
        if ( (num>>bits_count)&1==1)
            totalOne_bits++;
        else
            totalZero_bits++;
    }
    printf("Total zero bits is %d\n",totalZero_bits);
    printf("Total one bits is %d",totalOne_bits);
    return 0;
}
