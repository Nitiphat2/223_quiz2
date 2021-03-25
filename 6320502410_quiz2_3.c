#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    int i,j,k,a,b,c;
    for(i=1;i<=n;i++)
    {
        k=i;
        for(j=0;k>=10;j++)
        {
            k=k/10;
        }
        printf("%d",j);
    }
}
