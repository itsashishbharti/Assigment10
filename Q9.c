#include<stdio.h>
int digit(int ,int);
int main()
{
    int x,y;
    printf("\n Enter Your Number=");
    scanf("%d",&x);
    printf("\nEnter Your Digit You want search=");
    scanf("%d",&y);
    int re=digit(x,y);
   (re==1)?printf("\n Digit Found"):printf("\nDigit Not Found");
    return 0;
}
int digit(int a,int b)
{
   // printf("\nValue of a=%d",a);
    //printf("\n value of b=%d",b);
    int r;
    while(a!=0)
    {
        r=a%10;
        a=a/10;
        if(r==b)
        {
            return 1;
            break;
        }

    }
}