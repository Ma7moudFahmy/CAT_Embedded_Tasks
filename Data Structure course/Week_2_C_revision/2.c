//Write C program to check Leap Year or not.

#include <stdio.h>

int main()
{
	int year=0;
	printf("Enter a year : ");
	scanf("%d", &year);

	if( (year%4==0 && year%100!=0) || (year%400==0) )
		printf("%d is a leap year.",year);
	else
		printf("%d isnot a leap year.",year);

	return 0;
}
