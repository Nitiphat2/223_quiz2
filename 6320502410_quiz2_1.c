#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i=2,j=0,k=0,l,a;
    while(a<=n)
    {
        a=i*i*i;
        if(a==n)
        {
            j=1;
        }
        if(a<=n)
        {
            i++;
        }
    }
    i=2;
    while(i<=n/2)
    {
        for(l=i*i*i;l<=n;l++)
        {
            if((i*i*i)==l)
            {
                k++;
            }
        }
        i++;

    }
    if(n==1||j==0)
    {
        printf("%d",n-k);
    }
    else if(j==1)
    {
        printf("Not Cube Free");
    }
}
