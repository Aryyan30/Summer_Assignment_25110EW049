#include<stdio.h>
//Write a program to Find sum of digits of a number.
int main() 
{
    int n,a,sum=0;
    printf("Enter the digit=");
    scanf("%d", &n);
    while(n !=0)
    {
        a =n%10;
        sum= a + sum*10;
        n= n/10;
    }
    printf("The sum of digits are = %d" , sum);
}