#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int i,j,su=0,c=0;
    for(i=a;i<=b;i++)
    {
        su=0;
        for(j=i;j<=b;j++)
        {
            su+=j;
            if(su%2!=0)
            {
                c++;
            }
        }
    }
    printf("%d",c);

}