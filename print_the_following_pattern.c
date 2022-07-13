#include<stdio.h>
int main()
{
    int n,i,j,ch=64;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==1||i==n||j<=i)
            {
            printf("%d",j);
            }
        }
        printf("
");
    }
}