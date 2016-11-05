
#include<stdio.h>
void main()
{
    int n,i,a[20];
    printf("nhap n: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for (i=1;i<=n;i++)
        if(a[i]<0)
        {
        printf(" so am: ");
        printf(" %d\n",a[i]);
        }
       else
        {
            printf(" \nso duong: ");
            printf("%d\n",a[i]);
        }
 getch();
}
