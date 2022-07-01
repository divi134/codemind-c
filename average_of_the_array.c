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
        s=s+ar[i];
    }
    s=s/n;
    printf("%.2f",s);
}