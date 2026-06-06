#include<stdio.h>
int main() 
{
    int n,i=2,count=0;
    printf("Enter the digit=");
    scanf("%d", &n);
    for (i=2;i<n;i++)
    {
        if (n%i==0)
        {
            count += 1;
        }
    }
    if (count > 0)
        {
            printf("number is not a prime number ");
        }
        else
        {
            printf("number is a prime number ");
        }
    return 0;
}