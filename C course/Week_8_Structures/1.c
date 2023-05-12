#include <stdio.h>
#include <stdlib.h>

typedef struct employee
{
    char name[10];
    float salary, bonus, deductions;
} emp;

int main()
{
    float Total=0;
    emp employees[3] = { {"Mohsen",0,0,0}, {"Maged",0,0,0}, {"Mariam",0,0,0} } ;

    for(int i=0; i<3; i++)
    {
        printf("Enter the info of %s :-\n",employees[i].name);

        printf("# Salary : ");
        scanf("%f", &employees[i].salary);

        printf("# Bonus : ");
        scanf("%f", &employees[i].bonus);

        printf("# Deductions : ");
        scanf("%f", &employees[i].deductions);
        puts("--------------------");

        Total = Total + employees[i].salary + employees[i].bonus - employees[i].deductions;
    }
    puts("");
    printf("#The total values supplied by the finance team : %0.2f\n\n", Total);
    puts("--------------------");

    return 0;
}
