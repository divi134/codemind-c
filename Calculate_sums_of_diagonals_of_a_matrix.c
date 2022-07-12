#include<stdio.h>
int main()
{
    int a[100][100],i,j,n,s=0,p=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                p=p+a[i][j];
            }
            if((i+j)==n-1)
            {
                s=s+a[i][j];
            }
        }
    }
    printf("Principal Diagonal:%d
",p);
    printf("Secondary Diagonal:%d
",s);
}