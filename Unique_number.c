#include<stdio.h>
int main()
{
    int n,d,c,a[100],i=0,f=0,p,j;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        a[i++]=d;
        n=n/10;
    }
    for(p=0;p<i;p++)
    {
        for(j=0;j<i;j++)
        {
            if(a[p]==a[j])
            f++;
        }
    }
    if(f==i)
    {
        printf("Unique Number");
    }
    else
    {
        printf("Not Unique Number");
    }
}