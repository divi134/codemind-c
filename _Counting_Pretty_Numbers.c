#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int l,r;
        int count=0;
        int lastdigit=0;
        scanf("%d%d",&l,&r);
        for(int i=l;i<=r;i++)
        {
            lastdigit=i%10;
            if(lastdigit==2||lastdigit==3||lastdigit==9)
            {
                count++;
            }
        }
        printf("%d
",count);
    }
    return 0;
}