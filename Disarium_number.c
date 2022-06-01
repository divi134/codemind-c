#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,c=0,temp,d,p=0;
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        d=temp%10;
        temp=temp/10;
        c++;
    }
    temp=n;
    while(temp!=0)
    {
        d=temp%10;
        temp=temp/10;
        p=p+pow(d,c);
        c--;
    }
    if(p==n)
    {
        printf("True");
        
    }
    else
    {
        printf("False");
        
    }
    return 0;
}