#include<stdio.h>
void Onatural(int );
int main()
{
    int x;
    printf("\nEnter Your N Number=");
    scanf("%d",&x);
    Onatural(x);
    return 0;
}
void Onatural( int g)
{
    for(int i=1,k=2;i<g;i++,k++)
    {
        if(k%2!=0)
        {
        printf("%d\n",k);
        }
    }
}