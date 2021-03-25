#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i=2,j=0,k=0,l;
    while((i*i*i)<=n)
    {
        if((i*i*i)==n)
        {
            j=1;
        }
        i++;
    }
    i=2;
    while(i<=n)
    {
        for(l=0;l<=n;l++)
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
    else
    {
        printf("Not Cube Free");
    }
}
