#include<stdio.h>
#include<math.h>
void main()
{
    int i,n,dem=0;
    printf("nhap n: ");
    scanf("%d",&n);
    int a[100];
    for(i=1;i<n;i++)
    {
        printf("a[%d]",i);
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
        if (a[i]%2==0) dem++;
         printf("co %d so chan",dem);
    getch();
}
