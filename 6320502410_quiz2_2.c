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
        if(max<a[i][0])
        {
            max = a[i][0];
        }
    }
    int x[max][70],b,h;
    for(i=0;i<max;i++)
    {
        for(j=0;j<70;j++)
        {
            x[i][j]=0;
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=1;j<=70;j++)
        {
            if(j == a[i][1])
            {
                h=j-1;
                b = a[i][0]-1;
                for(k=0;k<a[i][2];k++)
                {
                    x[b][h]=1;
                    h++;
                }
            }
        }
    }
    for(i=0;i<max;i++)
    {
        for(j=0;j<70;j++)
        {
            if(x[i][j]==1)
            {
                printf("x");
            }
            else
            {
                printf("o");
            }
        }
        printf("\n");
    }
}
