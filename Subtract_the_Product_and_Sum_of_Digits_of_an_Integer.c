#include<stdio.h>
main()
{
    int a, r, n, sum=0, product=1;
    scanf("%d",&a);
    while(a>0)
    {
        r=a%10;
        sum+=r;
        product*=r;
        a=a/10;
    }
    n=product-sum;
    printf("%d",n);
}