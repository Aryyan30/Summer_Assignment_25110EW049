// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    int f1=0,f2=1,f3,i,n;
    printf("enter the nth digit= ");
    scanf("%d",&n);
    
    for(i=0;i<=n;i++)
    {
        f3=f1+f2;
        f1=f2;
        f2=f3;
    }
    printf("the nth digit of fibonachi series is = %d",f3);

    return 0;
}