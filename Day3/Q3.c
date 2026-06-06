#include<stdio.h>
int main() 
{
    int a,b,c,i,gcd;
    printf("Enter the first digit=");
    scanf("%d", &a);
    printf("Enter the second digit=");
    scanf("%d", &b);
    c = a>b? a : b ;
    for(i=1;i<=c;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    printf("the highest common factor is = %d" , gcd);
    return 0;
}
  