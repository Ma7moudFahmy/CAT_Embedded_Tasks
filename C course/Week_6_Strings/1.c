#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int input(char str[], int n);

int main()
{
    while(1)
    {
        short int len;

        printf("Enter the lenght of your string -only up to 100 characters- : ");
        scanf("%hi",&len);

        //Handling input buffer
        char ch;
        while ((ch = getchar()) != '\n' && ch != EOF);

        if(len>=1 && len<=100)
        {
            char lower[len+1];

            printf("Enter the string u wanna convert from lowercase to uppercase :- "
                   "(Click Enter when u finish!)\nYour string -->> ");

            //fgets(str,len+1,stdin);
            //while ((ch = getchar()) != '\n' && ch != EOF);
            //here in some case i need to click enter so i will use the following

            len = input(lower,len);

            char upper[len+1];
            for( int i = 0; i < len+1; i++ )
            {
                if( lower[i] >= 'a' && lower[i] <= 'z' )
                    upper[i]=lower[i]-32 ;
                else
                    upper[i]=lower[i];
            }

            printf("Your uppercase string is -->> ");
            puts(upper);
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

int input(char lower[], int n)
{
    int ch, i=0;

    while( (ch=getchar()) != '\n')
        if(i<n)
            lower[i++] = ch ;

    lower[i] = '\0';

    return i ;
}



