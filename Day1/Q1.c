#include <stdio.h>

int main() 
{
    int n,i,sum = 0;
    printf("Enter the nth digit=")
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
         sum += i;
    }
    printf("%d", sum)
    return 0;
}

