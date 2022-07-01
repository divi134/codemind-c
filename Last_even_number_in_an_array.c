#include<stdio.h>
int main()
{
    int n,i,a;
    int s=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        if(ar[i]%2==0)
        {
            s=ar[i];
            break;
        }
    }
    printf("%d",s);
}