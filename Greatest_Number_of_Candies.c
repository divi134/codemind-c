#include<stdio.h>
int main()
{
    int n,a[100],i,max=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]+k>=max)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
    return 0;
}