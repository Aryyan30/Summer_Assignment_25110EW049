// Q3 - Factorial
void q3() 
{
    int n, f = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) 
    {
        f *= i;
    }
    printf("%lld\n", f);
}