//write C Program to convert binary number to decimal

#include <stdio.h>
#include <math.h>

int convert_bin_to_decimal(long long int);

int main()
{
    while(1)
    {
        long long int bin_num=0;
        int dec_num=0;
        printf("Enter a binary number: ");
        scanf("%lld", &bin_num);

        //check if it is a binary number or not?
        long long int temp = bin_num;
        int is_binary = 1, digit = 0;
        while (temp != 0)
        {
            digit = temp % 10;
            if (digit != 0 && digit != 1)
            {
                is_binary = 0;
                break;
            }
            temp /= 10;
        }
        if (!is_binary)
        {
            printf("Invalid input: not a binary number\n");
            return 0;
        }

        dec_num = convert_bin_to_decimal(bin_num);

        printf("%lld in binary = %d in decimal\n", bin_num, dec_num);
    }
    return 0;
}

int convert_bin_to_decimal(long long int num_in_bin)
{
    int num_in_decimal=0, power=0, last_bit=0;
    while(num_in_bin!=0)
    {
        last_bit=num_in_bin%10;
        num_in_bin/=10;
        if(last_bit==1)
        {
            num_in_decimal+=pow(2, power);
        }
        power++;
    }
    return num_in_decimal;
}
