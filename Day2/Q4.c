#include<stdio.h>
//Write a program to Check whether a number is palindrome.
int main() 
{
    int n,a,sum=0,origin;
    printf("Enter the digit=");
    scanf("%d", &n);
    origin = n;
    while(n !=0)
    {
        a =n%10;
        sum = a + sum*10;
        n= n/10;
    }
    
    if (origin == sum)
    {
        printf("the number is a palindrome");
    }
    else
    {
        printf("the number is not a palindrome");
    }
}