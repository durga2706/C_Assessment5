#include<stdio.h>
int main()
{
    int a,ones,total=0;
    printf("Enter a number:");
    scanf("%d",&a);
    for(;a>10;a=a/10)
    {
        ones=a%100;
        if(ones%2!=0)
        {
            total++;
        }
    }
    printf("%d",total);
    return 0;
}
