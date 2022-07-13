#include<stdio.h>
int main()
{
    int len,i,j;
    scanf("%d",&len);
    int a[len],b[len];
    for(i=0;i<len;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<len;j++)
    {
        scanf("%d",&b[j]);
        printf("%d ",a[j]+b[j]);
    }
    return 0;
}