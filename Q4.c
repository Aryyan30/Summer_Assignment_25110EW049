#include<stdio.h>
int main() 
{
    int n,a,count=0;
    printf("Enter the digit=");
    scanf("%d", &n);
    while(n !=0)
    {
        a =n%10;
        count += 1;
        n= n/10;
    }
    printf("The number of digits are = %d" , count);
}