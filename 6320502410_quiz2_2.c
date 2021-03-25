#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[m][3],i,j,k;
    for(i=0;i<m;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int x[n][70],b,h,z;
    for(i=0;i<n;i++)
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
                h = j-1;
                b = a[i][0]-1;
                z = a[i][2];
                for(k=0;k<z;k++)
                {
                    x[b][h]=1;
                    h++;
                }
            }
        }
    }
    for(i=0;i<n;i++)
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

    return 0;
}
