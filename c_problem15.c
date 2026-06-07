#include<stdio.h>
int main()
{
    int a,temp=1,first,last,middle,result,x;
    printf("Enterr a number:");
    scanf("%d",&a);
    for(x=a;x>=10;x=x/10)
    {
        temp=temp*10;
    }
    first=a/temp;
    if(first%2!=0)
    {
        first=first-1;
    }
    middle=a%temp;
    result=first*temp+middle;
    printf("%d",result);
    return 0;
}
