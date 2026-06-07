#include<stdio.h>
int main()
{
    int a,ones,total=0;
    printf("Enter a number:");
    scanf("%d",&a);
    for(;a>0;a=a/10)
    {
        ones=a%10;
        if(ones==1||ones==4||ones==9 )
            total++;
    }
    printf("%d",total);
    return 0;
}
