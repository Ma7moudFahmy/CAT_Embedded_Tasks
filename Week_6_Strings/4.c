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
            char str[len+1];

            printf("Enter the string :- "
                   "(Click Enter when u finish!)\nYour string -->> ");

            //fgets(str,len+1,stdin);
            //while ((ch = getchar()) != '\n' && ch != EOF);
            //here in some case i need to click enter so i will use the following

            len = input(str,len);

            printf("Enter the character to search : ");
            ch=getchar();

            for( short int i = 0; i < len+1; i++ )
            {
                if( str[i] == ch )
                {
                    printf("'%c' is found at index %hi \n\n", ch, i);
                    break;
                }
                else
                {
                    printf("'%c' isnot found at any index!\n\n", ch);
                    break;
                }
            }
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



