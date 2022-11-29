#include<stdio.h>
int area(int x);
int main()
{
    int r;
    printf("\nEntre Raidus=");
    scanf("%d",&r);
    float re=area(r);
    printf("\n Area Of Circle=%f",re);
    return 0;
}
int area(int b)
{
    int c=(3.14*(b*b));
    return c;
}