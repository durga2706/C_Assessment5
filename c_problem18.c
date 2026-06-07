#include <stdio.h>
int main()
{
    int a,ones,tens,last2,i;
    printf("Enter a number:");
    scanf("%d",&a);
    ones=a%10;
    tens=(a/10)%10;
    last2=tens*10+ones;
    for(i=2;i< last2;i++)
    {
        if(last2%i==0)
            break;
    }
    if(i==last2)
        printf("Prime");
    else
        printf("Not Prime");
    return 0;
}
