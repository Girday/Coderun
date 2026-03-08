#include <stdio.h>

int main()
{
    unsigned long long a, b, c;
    scanf("%llu\n%llu\n%llu", &a, &b, &c);

    printf(((a >= b + c) || (b >= a + c) || (c >= a + b) ? "NO\n" : "YES\n"));

    return 0;
}
