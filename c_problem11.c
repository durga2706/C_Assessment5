#include<stdio.h>
int main()
{
    int x,count=0;
    printf("Enter a number: ");
    scanf("%d",&x);
    for(;x>0;x=x/10)
    {
        count=count+1;
    }
    printf("%d",count);
    return 0;
}
