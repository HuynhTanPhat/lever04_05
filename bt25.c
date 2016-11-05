#include <stdio.h>
void main ()
{

    int a[4][5],i,j;
    printf("nhap\n");
    for (i=0;i<4;i++)
        for (j=0;j<5;j++)
         scanf ("%d",&a[i][j]);
    printf("\n ma tran cap 4*5:  \n");
     for (i=0;i<4;i++)
     {  for (j=0;j<5;j++)
           printf("%3d",a[i][j]);
       printf("\n");
     }}
