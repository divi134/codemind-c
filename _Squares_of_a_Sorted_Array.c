#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,m,i,j,a[100],b[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[i]=pow(a[i],2);
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(b[i]>b[j])
            {
                d=b[i];
                b[i]=b[j];
                b[j]=d;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}