#include<stdio.h>
int main()
{
    int a,x,sum,temp,ones;
    printf("Enter a number:");
    scanf("%d",&a);
    for(;temp<0;temp=temp/10)
    {
        ones=temp%10;
        sum=sum+ones;
    }
    for(x=2;x<a;x++)
    {
        if(a%x==0)
        break;
    } 
    if(x==a&&sum==14)
        printf("Prime & Sum of Digits is 14");
    else if(x!=a&&sum==14)
        printf("Not Prime but Sum of Digits is 14");
    else if(x==a&&sum!=14)
        printf("Prime but Sum of Digits is not 14");
    else
        printf("Not Prime & Sum of Digits is not 14");
    return 0;
}
