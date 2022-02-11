#include<stdio.h>
int reverse(int n)
{
	int rev=0, r;
	while(n)
	{
		r=n%10;    
        rev=(rev*10)+r;    
        n=n/10; 
	}
	return rev;
}
int main()
{
	int x,y,i;
	scanf("%d%d",&x,&y);
	for(i=x; i<=y; i++)
    if(i==reverse(i))    
    {
        printf("%d ",reverse(i)); 
	}   
}