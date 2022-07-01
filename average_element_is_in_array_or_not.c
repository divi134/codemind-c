#include<stdio.h>
int main()
{
    int n,i,a,s=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        s=s+ar[i];
    }
    s=s/n;
    for(i=0;i<n;i++)
    {
        if(ar[i]==s)
        {
            s=1;
            break;
        }
    }
    if(s==1)
    printf("True");
    else
    printf("False");
}