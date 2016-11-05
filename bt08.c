#include<stdio.h>
#include<math.h>
void main()
{
    int i,n;
    float S;
    printf("nhap n: ");
    scanf("%d",&n);
    S=0;
    for(i=1;i<=n;i++)
        S=S+(float)1/i;
    printf("\n tong S=%.3f\n\n\n",S);
    getch();
}
