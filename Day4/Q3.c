// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>

int main() 
{
    int sum=0,i,n,b,a,origin,count=0;
    printf("enter the digit= ");
    scanf("%d",&n);
    origin=n;
    while(n>0)
    {
        b=n%10;
        count += 1;
        n=n/10;
    }
    n=origin;
    while(n>0)
    {
        a=n%10;
        sum= sum + (int)pow(a,count);
        n=n/10;
     }
     if (sum == origin)
     {
         printf("the entered digit is an armstrong number");
     }
     else
     {
         printf("the entered digit is not an armstron number");
     }

    return 0;
}