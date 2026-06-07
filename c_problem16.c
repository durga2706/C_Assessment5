#include<stdio.h>
int main()
{
    int a,x;
    printf("Enter a number:");
    scanf("%d",&a);
    for(x=2;x<a;x++)
    {
        if(a%x==0)
        break;
    } 
    if(a==x)
    {
        printf("prime");
    }
    else    
    printf("not prime");
    return 0;
}
