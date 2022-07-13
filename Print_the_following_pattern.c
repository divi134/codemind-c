#include<stdio.h>
int main()
{
    int n,i,j,k,ch;
    scanf("%d",&n);
    ch=n;
    for(i=1;i<=n;i++)
    {
        for(j=n,k=1;j>=1,k<=n;j--,k++)
        {
            if(i==j||i==k)
            {
                printf("%d ",ch-i+1);
            }
            else
            {
                printf(" ");
            }
        }
        printf("
");
    }
}