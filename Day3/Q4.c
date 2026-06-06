#include<stdio.h>
int main() 
{
    int a,b,c,i,lcd;
    printf("Enter the first digit=");
    scanf("%d", &a);
    printf("Enter the second digit=");
    scanf("%d", &b);
    c = a>b? a : b ;
    for(i=c;i>=2;i--)
    {
        if(a%i==0 && b%i==0)
        {
            lcd=i;
        }
    }
    printf("the lowest common factor is = %d" , lcd);
    return 0;
}
        