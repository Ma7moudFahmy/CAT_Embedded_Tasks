/*Write a C Program to Return multiple value from function-using
pointers Return minimum and maximum of the ARRAY*/

#include <stdio.h>

void min_max(int arr[], int size, int *min, int *max);

int main()
{
    int arrSize=0, min=0, max=0;
    printf("Enter size of the array : ");
    scanf("%d", &arrSize);

    printf("Enter %d elements in array : ", arrSize);
    int arr[arrSize];
    for(int i=0; i<arrSize; i++)
    {
        scanf("%d",&arr[i]);
    }

    min_max(arr, arrSize, &min, &max);

    printf("\nMinimum value: %d\n", min);
    printf("Maximum value: %d\n", max);

    return 0;
}

void min_max(int arr[], int size, int *min, int *max)
{
    *min=arr[0];
    *max=arr[0];

    for(int i=1; i<size; i++)
    {
        if(arr[i] < *min)
        {
            *min = arr[i];
        }
        else if(arr[i] > *max)
        {
            *max = arr[i];
        }
    }
}
