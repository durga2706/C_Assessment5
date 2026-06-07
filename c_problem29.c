#include<stdio.h>
int main()
{
    int a,b,c,x,big;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    big=a;
    if(b>big)
        big=b;
    if(c>big)
        big=c;
    for(x=big; ;x++)
    {
        if(x%a==0&&x%b==0&&x%c==0)
        {
            printf("%d",x);
            break;
        }
    }
    return 0;
}
