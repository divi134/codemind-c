#include<stdio.h>
int main()
{
    int a,b,n,s;
    scanf("%d",&n);
    while(n>0)
    {
        scanf("%d",&a);
        scanf("%d",&b);
        s=a+b;
        printf("%d
",s);
        n--;
    }
    return 0;
}