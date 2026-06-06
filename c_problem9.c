#include<stdio.h>
int main()
{
    int x,ones,sum;
    sum=0;
    for(x=10;x<=99;x++)
    {
        ones=x%10;
        if(ones==5)
        {
            sum=sum+x;
        }
    }
     printf("%d\n",sum);
    return 0;
}
