#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int input(char str[], int n);

int main()
{
    while(1)
    {
        short int len=0, tot_alphabets=0, tot_digits=0, tot_special=0;

        printf("Enter the lenght of your string -only up to 100 characters- : ");
        scanf("%hi",&len);

        //Handling input buffer
        char ch;
        while ((ch = getchar()) != '\n' && ch != EOF);

        if(len>=1 && len<=100)
        {
            char str[len+1];

            printf("Enter the string :- "
                   "(Click Enter when u finish!)\nYour string -->> ");

            //fgets(str,len+1,stdin);
            //while ((ch = getchar()) != '\n' && ch != EOF);
            //here in some case i need to click enter so i will use the following

            len = input(str,len);
            for( int i = 0; i < len+1; i++ )
            {
                if( (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') )
                    tot_alphabets+= 1;
                else if( (str[i] >= '0' && str[i] <= '9') )
                    tot_digits+= 1;
                else if( str[i]>=' ' )
                    tot_special+= 1;
            }

            printf("Total number of alphabets in the string = %hi\n",tot_alphabets);
            printf("Total number of digits in the string = %hi\n",tot_digits);
            printf("Total number of special characters in the string = %hi\n",tot_special);
            puts("");
        }
        else
        {
            puts("The lenght out of the allowed range, Try again (from 1 to 100)!");
            puts("");
        }
    }
    return 0;
}

int input(char str[], int n)
{
    int ch, i=0;

    while( (ch=getchar()) != '\n')
        if(i<n)
            str[i++] = ch ;

    str[i] = '\0';

    return i ;
}



