#include<stdio.h>
int even(int );
int main()
{
    int a;
    printf("\nEnter Your Number=");
    scanf("%d",&a);
    int re=even(a);
    switch(re)
    {
        case 0:
        printf("\nNumber Is Odd");
        break;
        case 1:
        printf("\nNumber Is Even");
        break;
    }
    return 0;
}
int even(int g)
{
    if(g%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    return 0;
}