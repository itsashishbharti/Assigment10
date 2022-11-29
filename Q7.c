#include <stdio.h>  
int fact(int z);  
int main()  
{  
    int n, r, res;  
    printf("Enter the value of n=");  
    scanf("%d",&n);  
    printf("\nEnter the value of  r=");  
    scanf("%d",&r);  
    res = fact(n) / (fact(r) * fact(n - r));  
    printf("\nCombination = %d", res);  
    return 0;
}  
  
int fact(int z)  
{  
    int f = 1, i;  
    if (z == 0)  
    {  
        return(f);  
    }  
    else  
    {  
        for (i = 1; i <= z; i++)  
    {  
            f = f * i;  
    }  
    }  
    return(f);  
}  