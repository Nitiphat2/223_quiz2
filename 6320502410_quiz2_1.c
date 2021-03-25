#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i=2,j=0,k=0,l,a;
    a=i*i*i;
    while(a<=n)
    {
        if(a==n)
        {
            j=1;
        }
        if(a<=n)
        {
            i++;
        }
        a=i*i*i;
    }
    i=2;
    a=i*i*i;
    while(a<=n)
    {
        k++;
        i++;printf("%d %d\n",k,a);
        a=i*i*i;
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
