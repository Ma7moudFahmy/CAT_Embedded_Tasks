/*Write a C program to input elements in array
from user and count even and odd elements in array*/

#include <stdio.h>

int main()
{
    int arrSize=0, totalEven=0, totalOdd=0;
    printf("Enter size of the array : ");
    scanf("%d", &arrSize);

    printf("Enter %d elements in array : ", arrSize);
    int arr[arrSize];
    for(int i=0; i<arrSize; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<arrSize; i++)
    {
        if(arr[i]%2==0)
            totalEven++;
        else
            totalOdd++;
    }
    printf("\nTotal even elements : %d\n", totalEven);
    printf("Total odd elements : %d\n", totalOdd);

    return 0;
}
