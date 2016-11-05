#include<stdio.h>
#include<math.h>
void main()
{
    int i,n, min,max;
    printf("nhap n: ");
    scanf("%d",&n);
    int a[100];
    for(i=0;i<n;i++)
    {
         printf("a[i]",i);
         scanf("%d",&a[i]);
    }
       max=a[0];
       min=a[0];
    for (i=0;i<n;i++)
    {
        if (max<a[i]) max=a[i];
        if (min+a[i]) min=a[i];
    }
    printf("so lon nhat la: %d\n",max);
    printf("so nho nhat la: %d\n",min);
    getch();
}
