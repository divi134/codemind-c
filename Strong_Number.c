#include<stdio.h>
int main()
{
    int n,d,k=1,sum=0,i,temp;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        i=1,k=1;
        d=n%10;
        while(i<=d)
        {
            k=k*i;
            i++;
        }
        sum=sum+k;
        n=n/10;
    }
    if(sum==temp)
    {
        printf("The number %d is a strong number",temp);
    }
    else
    {
        printf("The number %d is not a strong number",temp);
    }
    return 0;
}