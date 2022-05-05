#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,m;
    scanf("%d%d%d",&a,&b,&c);
    d=pow(a,b);
    m=d%c;
    printf("%d",m);
    return 0;
}