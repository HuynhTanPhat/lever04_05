#include<stdio.h>
void main()
{
  int i,n,j,a[100],dem=1;
  printf("nhap n: \t");
  scanf("%d",&n);
  for (i=2;i<n;i++)
    a[i]=i;
    for (j=2;j<sqrt(n);j++)
    {
        for (i=2;i<n;i++)
        {
            a[i*j]=0;
        }
    }
      for (i=2;i<n;i++)
      if (a[i]!=0) dem++;

  printf("\n co %d so nguyen to",dem);
  getch();
}

