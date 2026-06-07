#include<stdio.h>
int main()
{
    int x,ones,sum=0;
    printf("Enter a number:");
    scanf("%d",&x);
    for(;x>0;x=x/10)
    {
        ones=x%10;
        sum=sum+ones;
    }
    printf("%d",sum);
    return 0;
}
