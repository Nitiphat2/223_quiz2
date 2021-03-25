#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[m][n],i,j,k;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int max=0;
    for(i=0;i<m;i++)
    {
        if(max<a[i][1])
        {
            max = a[i][1];
        }
    }
    int x[max][70]
    for(i=0;i<max;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
