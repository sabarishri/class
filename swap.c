#include <stdio.h>

int main()
{
    int a,b,temp=0;
    scanf("%d %d",&a,&b);
    if(a!=b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    printf("%d %d",a,b);
    return 0;
}
