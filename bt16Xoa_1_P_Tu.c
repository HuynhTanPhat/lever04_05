#include <stdio.h>
void main ()

{
   int i,k,n,j,a[20],b[20];
    printf("nhap n: ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {    printf("a[%d]= ",i);
         scanf ("%d",&a[i]);
    }
    printf("nhap k ");
    scanf("%d",&k);
    printf("\nDay ban dau:  ");
     for (i=0;i<n;i++)
        printf("%d \t",a[i]);
    j=0;;
    for(i=0;i<n;i++)
           if (a[i]!=k)
    {
        b[j]=a[i];
        j++;
    }
    printf("\n day xoa k =%d\n",k);
    for (i=0;i<j;i++)
          printf("%d  ",b[i]);

}
