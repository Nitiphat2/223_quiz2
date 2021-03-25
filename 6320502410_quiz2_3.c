#include<stdio.h>
int main()
{
    int n,m=0;
    scanf("%d",&n);
    int i,j,k,a,b,c,z,x;
    for(i=1;i<=n;i++)
    {
        k=i;
        a=0;
        for(j=0;k>=10;j++)
        {
            k=k/10;
        }
        x=i;
        for(k=j;k>=0;k--)
        {
            c=1;
            for(b=0;b<k;b++)
            {
                c=c*10;
            }
            z=x%10;
            x=x/10;
            a = a + (z*c);
        }
        if(a == i)
        {
            m++;
        }
    }
    printf("%d",m);
}
