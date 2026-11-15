#include <stdio.h>

int main(void)
{
    int n;
    long long total = 0;
    if (scanf("%d", &n) != 1)
        return 0;
    if (n < 0)
    {
        printf("NG");
        return 0;
    }
    for (long long number = 2; number <= n; number += 2)
        total += number;
    printf("%lld", total);
    return 0;
}
