#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=5, y=9, z=20;
    int *px=&x, *py=&y, *pz=&z;

    printf("x = %d , y = %d , z = %d \npx = %p , py = %p , pz = %p \n*px = %d , *py = %d , *pz = %d \n\n",x,y,z,px,py,pz,*px,*py,*pz);

    printf("Swapping Pointers : \n\n");

    int *temp = pz;
    pz = px;
    px = py;
    py = temp;

    printf("x = %d , y = %d , z = %d \npx = %p , py = %p , pz = %p \n*px = %d , *py = %d , *pz = %d \n",x,y,z,px,py,pz,*px,*py,*pz);

    return 0;
}
