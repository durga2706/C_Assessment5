#include<stdio.h>
int main()
{
    int a,ones,total=0;
    printf("Enter a number:");
    scanf("%d",&a);
    for(;a>0;a=a/10)
    {
        ones=a%10;
        if(ones==2||ones==3||ones==5|| ones==7)
        {
            total++;
        }
    }
    printf("%d",total);
    return 0;
}
