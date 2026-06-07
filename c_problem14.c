#include<stdio.h>
int main()
{
    int a,temp=1,first,last,middle,result,x;
    printf("Enter a number:");
    scanf("%d",&a);
    last=a%10;

    for(x=a; x>=10; x=x/10)
    {
        temp=temp*10;
    }
    first=a/temp;
    middle=(a%temp)/10;
    result=last*temp+middle*10+first;
    printf("%d",result);
    return 0;
}
