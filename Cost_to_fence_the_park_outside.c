#include<stdio.h>
int main()
{
    int l,b,w,c,a,total;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    a=((l+2*w)*(b+2*w))-(l*b);
    total=a*c;
    printf("%d",total);
    return 0;
}