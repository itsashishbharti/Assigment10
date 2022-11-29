#include<stdio.h>
void Natural(int );
int main()
{
    int x;
    printf("\nEnter Your N Number=");
    scanf("%d",&x);
    Natural(x);
    return 0;
}
void Natural( int g)
{
    for(int i=1;i<=g;i++)
    {
        printf("%d\n",i);
    }
}