#include<stdio.h>
void main()
{
    int b,n,i,j;
    printf("nhap n: ");
    scanf("%d",&n);
    int a[100];
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i) ;
        scanf("%d",&a[i]);
    }
    printf("\n");
    for (i=0;i<n;i++)
        printf("%d",a[i]);
    for (i=0;i<n-1;i++)
    for (j=i+1;j<n;j++)
        if (a[i]>a[j])
        {
            b=a[i];
            a[i]=a[j];
            a[j]=b;
        }
    printf("\n\nday so la: \n\n\n");
    for(j=0;j<n;j++)
        printf("%d",a[j]);
    getch();

}
