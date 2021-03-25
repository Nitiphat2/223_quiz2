#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i=2,j=0,k;
    while((i*i*i)<=n)
    {
        if((i*i*i)==n)
        {
            j=1;
        }
        i++;
    }
    if(n==1||j==0)
    {
        printf("%d",n);
    }
    else
    {
        printf("Not Cube Free");
    }
}
