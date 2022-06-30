#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    scanf("%d",&a);
    int diff1,diff2,i;
    int pow2;
    int arr[100];
    for(i=0;i<100;i++)
    {
        pow2=pow(2,i+1);
        arr[i]=pow2;
    }
    for(i=0;i<100;i++)
    {
        if(arr[i]>a)
        {
            diff1=arr[i]-a;
            diff2=a-arr[i-1];
            if(diff1>diff2)
            {
                printf("%d",diff2);
            }
            else if(diff1<diff2)
            {
                printf("%d",diff1);
            }
            break;
        }
    }
    return 0;
}