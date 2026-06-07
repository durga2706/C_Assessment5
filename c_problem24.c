#include<stdio.h>
int main()
{
    int a,num,total;
    total=0;
    printf("Enter a number:");
    scanf("%d",&a);
    for(;a>=10;a=a/10)
    {
        num=a%100;
        if(num==16 || num==25 || num==36 || num==49 || num==64 || num==81)
        {
            total++;
        }
    }
    printf("%d",total);
    return 0;
}
