#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,k,a[100];
    printf("nhap n: ");
    scanf("%d",&n);
    printf("nhap k: ");
    scanf("%d",&k);
    for(i=0;i<=n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }

    for(i=1;i<=n;i++)
    if(a[i]%k==0)
        printf("so chia het cho k:  %d\n",a[i]);
    getch();
}
