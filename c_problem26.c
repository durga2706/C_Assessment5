#include<stdio.h>
int main()
{
    int x;
    for(x=9999;x>=1000;x--)
    {
        if(x%7==0&&x%9==0)
        {
            printf("%d",x);
            break;
        }
    }
    return 0;
}
