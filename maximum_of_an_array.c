#include<stdio.h>
int main()
{
    int n,i,a;
    float s=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int max=ar[0];
    for(i=0;i<n;i++)
    {
        if(ar[i]>max)
        {
            max=ar[i];
        }
    }
    printf("%d",max);
}