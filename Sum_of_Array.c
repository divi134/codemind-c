#include<stdio.h>
main()
{
	int n,i,arr[100],sum;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
	sum = sum + arr[i]; 
	}
	printf("%d",sum);
}