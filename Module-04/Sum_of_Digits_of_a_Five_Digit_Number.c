#include <stdio.h>

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (n % 10) + sum(n / 10);
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int calculation = sum(n);

    printf("%d", calculation);

    return 0;
}