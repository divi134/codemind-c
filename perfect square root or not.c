#include<stdio.h>
#include<math.h>
int main()
{
    int a,g;
    float f;
    scanf("%d",&a);
    f=sqrt(a);
    g=(int)f;
    if(f==g)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}