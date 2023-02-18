#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr = (int*)malloc(5*sizeof(int));
    //or  int *arr = (int*)calloc(5,sizeof(int));

    for(int i=0 ; i<5 ; i++)
        arr[i] = i+1;

    printf("Array Elements is : ");
    for(int i=0 ; i<5 ; i++)
        printf("%d\t",arr[i]);

    int *newArr;
    newArr = (int*)realloc(arr, 7*sizeof(int));
    newArr[5]=6;
    newArr[6]=7;

    printf("\nNew Array Elements is : ");
    for(int i=0 ; i<7 ; i++)
        printf("%d\t",newArr[i]);

    free(arr);
    free(newArr);

    arr = NULL;
    newArr = (int*)0;

    return 0;
}
