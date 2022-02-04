#include<stdio.h>
int main()
{
    int l,b,c,w,L,B,area,cost;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    L=l-2*w;
    B=b-2*w;
    area=(l*b)-(L*B);
    cost=area*c;
    if(L>0&&B>0)
    {
        printf("%d",cost);
    }
    else
    {
        printf("Impossible");
    }
}