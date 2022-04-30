#include<stdio.h>
int main()
{
    int num, remainder, largest=0;
    scanf("%d",&num);
    while(num>0)
    {
        remainder=num%10;
        if(largest<remainder)
        {
            largest=remainder;
        }
        num=num/10;
    }
    printf("%d",largest);
    return 0;
}