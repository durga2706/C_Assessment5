#include <stdio.h>
int main()
{
    int a,b,x,hcf=1;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    for(x =1;x<=a&&x<=b;x++)
    {
        if(a%x==0&&b%x==0)
        {
            hcf=x;
        }
    }
    printf("HCF=%d",hcf);
    return 0;
}
