#include <stdio.h>
#include <math.h>
void main()
{
  int i,n,*p;

  printf ("nhap n: ");
  scanf ("%d",&n);
  int a[100];
   p=a;
  for(i=0;i<n;i++)
  {printf("a[%d]",i);
  scanf ("%d",&a[i]);}
    for (i=0;i<n;i++)
        printf("%d",a[i]);
}
