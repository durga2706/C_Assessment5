#include<stdio.h>
int main()
{
    int a,hundreds,tens,middle,i,count = 0;
    printf("Enter a number:");
    scanf("%d",&a);
    hundreds=(a/100)%10;
    tens=(a/10)%10;
    middle=hundreds*10+tens;
    for(i=1;i<=middle;i++)
    {
        if(middle%i==0)
            count++;
    }
    if(count == 2)
        printf("Prime");
    else
        printf("Not Prime");
    return 0;
}
