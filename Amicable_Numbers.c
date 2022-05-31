#include<stdio.h>
int main()
{
    int i,j,sum=0,sum2=0,n,m;
    scanf("%d%d",&n,&m);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    for(j=1;j<m;j++)
    {
        if(m%j==0)
        {
            sum2=sum2+j;
        }
    }
    if(n==sum2&&m==sum)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}