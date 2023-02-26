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
        scanf("%d",&len);

        //Handling input buffer
        char ch;
        while ((ch = getchar()) != '\n' && ch != EOF);

        if(len>=2 && len<=100)
        {
            char str[len+1];

            printf("Enter the string u wanna reverse :- "
                   "(Click Enter when u finish!)\nYour string -->> ");

            //fgets(str,len+1,stdin);
            //while ((ch = getchar()) != '\n' && ch != EOF);
            //here in some case i need to click enter so i will use the following

            len = input(str,len);

            char rev[len+1];
            for(int i=0; i < len+1 ; i++ )
                rev[i]= str[len-i-1];

            printf("Your reversed string is -->> ");
            puts(rev);
            puts("");
        }
        else
        {
            puts("The lenght out of the allowed range, Try again (from 2 to 100)!");
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



