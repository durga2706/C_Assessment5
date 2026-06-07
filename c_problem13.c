#include<stdio.h>
int main()
{
    int x,ones,reverse=0;
    printf("Enter a number:");
    scanf("%d",&x);
    for(;x>0;x=x/10)
    {
        ones=x%10;
        reverse=reverse*10+ones;
    }
    printf("%d",reverse);
    return 0;
}
