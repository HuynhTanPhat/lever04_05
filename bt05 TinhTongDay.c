#include<stdio.h>
void main()
{
    int i,n,T,a[100];
    printf("nhap n=");
    scanf("%d",&n);

    T=0;
    for (i=0;i<n;i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
        T=T+a[i];
    }
    printf(" Tong T= %d",T);

}
