#include<stdio.h>
int main()
{
    int n,arr[100],i,m,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(arr[i]==m)
        {
            c+=1;
            printf("%d",i);
        }
    }
    if(c==0)
    {
        printf("-1");
    }
}