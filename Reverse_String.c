#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	scanf("%[^
]s",str);
	int len=0,i,j,t;
	for(i=0;str[i]!=NULL;i++)
	{
		len=len+1;
	}
		i=0;
		j=len-1;
		while(i<j)
		{
			t=str[i];
			str[i]=str[j];
			str[j]=t;
			i++;
			j--;
		}
	printf("%s",str);
}