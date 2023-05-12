#include <stdio.h>
#include <stdlib.h>

int ID(int);
int Pass(int);

int main()
{
    while(1)
    {
        int id, pass, check_id, check_pass;

        printf("Enter your ID : \n");

        scanf("%d",&id);
        check_id = ID(id);

        if(check_id)
        {
            printf("Enter your password : \n");

            scanf("%d",&pass);
            check_pass = Pass(pass);

            if(check_pass)
            {
                printf("Welcome, login is done!");
                break;
            }
            else printf("Invalid password, try again!\n");

            }
        else
            printf("Incorrect ID, Try again!\n");
    }
    return 0;
}

int ID(int x)
{
    if (x == 10002000)
        return 1;
    else
        return 0;
}
int Pass(int y)
{
    if (y == 159159)
        return 1;
    else
        return 0;
}
