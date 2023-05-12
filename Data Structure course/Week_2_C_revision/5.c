/*write C Program to find maximum and
minimum of 4 numbers using functions.*/

#include <stdio.h>

int max(int, int, int, int);
int min(int, int, int, int);

int main()
{
    int n1=0, n2=0, n3=0, n4=0;
    printf("Enter 4 numbers : ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    max(n1, n2, n3, n4);
    min(n1, n2, n3, n4);

    return 0;
}


int max(int x1, int x2, int x3, int x4)
{
    int max_num = (x1 > x2) ? x1 : x2;
    max_num = (x3 > x4) ? ((x3 > max_num) ? x3 : max_num) : ((x4 > max_num) ? x4 : max_num);
    printf("\n%d is maximum number\n", max_num);
}

int min(int x1, int x2, int x3, int x4)
{
    int min_num = (x1 < x2) ? x1 : x2;
    min_num = (x3 < x4) ? ((x3 < min_num) ? x3 : min_num) : ((x4 < min_num) ? x4 : min_num);
    printf("%d is minimum number\n", min_num);
}

//Next is the same but using if instead ternary " complicated not simple as previous "

/*int max(int x1, int x2, int x3, int x4)
{
    if(x1 > x2)
    {
        if (x3 > x4)
        {
            if(x1 > x3)
            {
                printf("%d is maximum number",x1);
            }
            else
            {
                printf("%d is maximum number",x3);
            }
        }
        else
        {
            if(x1 > x4)
            {
                printf("%d is maximum number",x1);
            }
            else
            {
                printf("%d is maximum number",x4);
            }
        }
    }
    else  // x2 > x1
    {
        if (x3 > x4)
        {
            if(x2 > x3)
            {
                printf("%d is maximum number",x2);
            }
            else
            {
                printf("%d is maximum number",x3);
            }
        }
        else
        {
            if(x2 > x4)
            {
                printf("%d is maximum number",x2);
            }
            else
            {
                printf("%d is maximum number",x4);
            }
        }
    }
}

int min(int x1, int x2, int x3, int x4)
{
    if(x1 < x2)
    {
        if (x3 < x4)
        {
            if(x1 < x3)
            {
                printf("%d is minimum number",x1);
            }
            else
            {
                printf("%d is minimum number",x3);
            }
        }
        else
        {
            if(x1 < x4)
            {
                printf("%d is minimum number",x1);
            }
            else
            {
                printf("%d is minimum number",x4);
            }
        }
    }
    else  // x2 < x1
    {
        if (x3 < x4)
        {
            if(x2 < x3)
            {
                printf("%d is minimum number",x2);
            }
            else
            {
                printf("%d is minimum number",x3);
            }
        }
        else
        {
            if(x2 < x4)
            {
                printf("%d is minimum number",x2);
            }
            else
            {
                printf("%d is minimum number",x4);
            }
        }
    }
}*/
