#include<stdio.h>
//Write a program to Find product of digits.
int main() 
{
    int n,a,product=1;
    printf("Enter the digit=");
    scanf("%d", &n);
    while(n !=0)
    {
        a =n%10;
        product= product*a;
        n= n/10;
    }
    printf("The sum of digits are = %d" , product);
}