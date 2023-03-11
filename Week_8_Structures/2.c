#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct subjects
{
    int programming, dataStructure, discreteMaths, algorithms;
} sub;

sub students[10];

void showGrades(short);

int main()
{
    while(1)
    {
        srand(time(NULL));

        for(int i=0; i<10; i++)
        {
            students[i].programming=rand()%100+1;
            students[i].dataStructure=rand()%100+1;
            students[i].discreteMaths=rand()%100+1;
            students[i].algorithms=rand()%100+1;
        }

        short choice=0,ID;
        //consider that ID of students from 1 to 10
        //And Admins for 11 to 15

        printf("Are you Admin or Student?\n"
               "choose 1 for Admin or 2 for student : ");
        scanf("%hd",&choice);

        switch(choice)
        {
        case 1:
        {
            do
            {
                short stdChoice;
                printf("\nEnter your ID (from 11 to 15) --> ");
                scanf("%hd",&ID);

                if(ID >= 11 && ID <= 15 )
                {
                    printf("Choose the ID of the student u wanna manipulate his grades (from 1 to 10) : ");
                    scanf("%hd",&stdChoice);

                    if(stdChoice >= 1 && stdChoice <= 10 )
                    {
                        printf("\nThe grades of student %hd is :- \n",stdChoice);
                        showGrades(stdChoice);

                        puts("Enter new grades :-\n");

                        printf("Programming    : ");
                        scanf("%d",&students[stdChoice-1].programming);


                        printf("Data Structure : ");
                        scanf("%d",&students[stdChoice-1].dataStructure);


                        printf("Discrete Maths : ");
                        scanf("%d",&students[stdChoice-1].discreteMaths);


                        printf("Algorithms     : ");
                        scanf("%d",&students[stdChoice-1].algorithms);


                        printf("\nNew grades of student %hd is :-\n",stdChoice);
                        showGrades(stdChoice);

                        break;
                    }
                    else
                    {
                        printf("There is no student has ID %hd. Try again!\n",stdChoice);
                    }
                }
                else
                {
                    puts("Wrong ID, Try again!");
                }
            }
            while(1);
            break;
        }
        case 2:
        {
            do
            {
                printf("\nEnter your ID (from 1 to 10) --> ");
                scanf("%hd",&ID);

                if(ID >= 1 && ID <= 10 )
                {
                    puts("\nYour grades :- ");
                    showGrades(ID);
                    break;
                }
                else
                {
                    puts("Wrong ID, Try again!");
                }
            }
            while(1);
            break;
        }
        default:
        {
            puts("You should enter 1 or 2. Try again!\n");
            break;
        }
        }
    }
    return 0;
}

void showGrades(short id)
{
    puts("----------------------------------------------------------------------");
    printf("|  Programming  |  Data Structure  |  Discrete Maths  |  Algorithms  |\n");
    puts("----------------------------------------------------------------------");
    printf("|     %d        |        %d        |        %d        |      %d      |\n",students[id-1].programming,
           students[id-1].dataStructure, students[id-1].discreteMaths, students[id-1].algorithms);
    puts("----------------------------------------------------------------------\n");
}
