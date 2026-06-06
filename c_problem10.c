#include<stdio.h>
int main()
{
    int x,tens,sum;
    sum=0;
    for(x=10;x<=99;x++)
    {
        tens=x/10;
        if((x%2!=0)&&(tens==7))
        {
            sum=sum+x;
        }
    }
     printf("%d\n",sum);
    return 0;
}
