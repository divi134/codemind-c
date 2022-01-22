#include<stdio.h>
int main()
{
    int i,n,rev=0,rem;
    scanf("%d",&n);
    for(i=n;n!=0; n=n/10)
    {
    rem=n%10;
    rev=rev*10+rem;
    }
    printf("%d",rev);
}