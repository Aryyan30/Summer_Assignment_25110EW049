#include<stdio.h>
int main() 
{
    int n,i,j,count;
    printf("Enter the range=");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        count=0;
        if (i==1)
        {
            printf("%d is not a prime number",i);
            printf("\n");
            continue;
        }
        
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                count +=1;
                break;
            }
        }
        if (count== 0)
        {
            printf("%d is a prime number",i);
            printf("\n");
        }
        else 
        {
            printf("%d is not a prime number",i);
            printf("\n");
        }
    }
    return 0;
}