#include<stdio.h>
int main()
{
    int a,i,count=0,count_div(int i);
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(count_div(i)==9)
        {
        printf("%d ",i);
        count++;
        }
    }
    printf("
Total=%d",count);
}
int count_div(int n)
{
	int i,count=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	return count;
}
