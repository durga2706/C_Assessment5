#include<stdio.h>
int main()
{
    int count=0;
    for(int x=1;x<=9;x++)
    {
        if(x==2||x==3||x==5||x==7)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
