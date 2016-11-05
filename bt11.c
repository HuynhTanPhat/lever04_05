#include<stdio.h>
#include<math.h>
void main()
{
    int i,n,GTLN,GTNN,a[20];
    printf("nhap n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    GTLN=a[0];GTNN=a[0];
    for (i=0;i<n;i++)
    {
        if (GTLN<a[i]) GTLN=a[i];
        if (GTNN>a[i]) GTNN=a[i];
    }
    printf("GTLN=%d\n",GTLN);
    printf("GTNN=%d\n",GTNN);
    getch();

}
