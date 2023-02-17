#include <stdio.h>
#include <stdlib.h>

int BubbleSort(int arr[],int size);

int main()
{
    int size;
    printf("Enter size of array : \n");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the elements of the array : ");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    BubbleSort(arr,size);

    return 0;
}

int BubbleSort(int arr[],int size)
{
    int temp;
    for(int i=0; i<size-1; i++)
    {
        for(int j=0; j<size-i-1; j++)
        {
            //Ascending
            if(arr[j]>arr[j+1])
            {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }

            /*
            Descending:-

            if(arr[j+1]>arr[j])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }*/
        }
    }
    printf("Array after Bubbles sort is : ");
    for(int i=0; i<size; i++)
    {
        printf("%d\t",arr[i]);
    }
}
