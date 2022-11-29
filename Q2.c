#include<stdio.h>
int SI(int ,int ,int);
int main()
{
    int p,r,t;
    printf("\nEnter Your Ammont=");
    scanf("%d",&p);
    printf("\nEnter Your Rate of intrest=");
    scanf("%d",&r);
    printf("\nEnter Your Time=");
    scanf("%d",&t);
    float re=SI(p,r,t);
    printf("\n Simple Intrest=%f",re);
    return 0;
}
int SI(int x,int y,int z)
{
    int si=(x*y*z)/100;
    return si;
}