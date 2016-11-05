#include<stdio.h>
#include<math.h>
void main()
{
   int i,n,j,k,m,a[20];
   printf("nhap n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
        for(i=0;i<n-1;i++)
            for(j=i+1;j<n;j++)

                if(a[i]>a[j])
                           {
                            k=a[i];
                            a[i]=a[j];
                            a[j]=k;
                            }
                    printf("\n\nday tang dan: \n");
                    for (i=0;i<n;i++)
                    printf("%d",a[i]);
                    printf("\n\n");
         for(i=0;i<n-1;i++)
            for(j=i+1;j<n;j++)

                if (a[j]>a[i])
                        {
                            m=a[j];
                            a[j]=a[i];
                            a[i]=m;
                        }
                    printf("\n\nday giam dan: \n");
                    for (j=0;j<n;j++)
                    printf("%d",a[j]);
                    printf("\n\n");
        getch();
}
