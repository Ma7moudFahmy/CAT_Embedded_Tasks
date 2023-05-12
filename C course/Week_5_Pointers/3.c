#include <stdio.h>
#include <stdlib.h>

int scalar_mul(int arr1[],int arr2[],int x)
{
    int res;
    for(int i=0; i<x; i++)
    {
        res+=(arr1[i]*arr2[i]);
    }
    return res;
}
int main()
{
    int x;
    printf("Enter size of arrays : \n");
    scanf("%d",&x);

    int arr1[x],arr2[x];

    printf("Enter the elements of the first array : ");
    for(int i=0; i<x; i++)
    {
        scanf("%d",&arr1[i]);
    }

    printf("Enter the elements of the second array : ");
    for(int i=0; i<x; i++)
    {
        scanf("%d",&arr2[i]);
    }

    printf("The scalar multiplication of two arrays = %d",scalar_mul(arr1,arr2,x));
    return 0;
}
