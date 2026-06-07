#include<stdio.h>
int main()
{
    int x,n,ones,sum,count=0;
    for(x=1;x<100000;x++)
    {
        n=x;
        sum=0;
        for(;n>0;n=n/10)
        {
            ones=n%10;
            sum=sum+ones;
        }
        if(sum==14)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
