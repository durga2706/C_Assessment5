#include<stdio.h>
int main()
{
    int x,tens,ones;
    for(x=10;x<=99;x++)
    {
        tens=x/10;
        ones=x%10;
        if((x%2==0)&&(tens+ones==6))
        {
            printf("%d\n",x);
        }
    }
    return 0;
}
