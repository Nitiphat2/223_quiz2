#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i=2,j=0,k=1;
    while((i*i*i)<=n)
    {
        if((i*i*i)==n)
        {
            j=1;
        }
        i++;
    }
    i=2;
    while(k<=n)
    {
        if((i*i*i)!=n)
        {
            k++;
        }
        i++;

    }
    if(n==1||j==0)
    {
        printf("%d",k);
    }
    else
    {
        printf("Not Cube Free");
    }
}
