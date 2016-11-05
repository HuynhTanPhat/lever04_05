#include<stdio.h>
void main()
{
    int i,n,a[100];
    printf("nhap n: ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("a[%d]",i);
        scanf("%d",&a[i]);
        }
         for (i=0;i<n;i++)
        {
            if(a[i]%2==0)
                printf("So chan: %d\n",a[i]);
            else printf ("So le: %d\n",a[i]);
        }
}
