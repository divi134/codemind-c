#include<stdio.h>
int main()
{
    int n,s1=0,s2=0,t,s;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(a[i]<=t)
        {
        s1=s1+1;
    }
    else if(a[i]>t)
    {
        s2=s2+2;
    }
        
    }
s=s1+s2;
printf("%d",s);
}