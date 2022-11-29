#include<stdio.h>
int fact(int x);
int main()
{
    int a;
    printf("\nEnter Your Number=");
    scanf("%d",&a);
    int re=fact(a);
    printf("\n Factorial=%d",re);
    return 0;
}
int fact(int b)
{
    int f=1;
    for(int i=1;i<=b;i++)
    {
        f=f*i;
    }
    return f;
}