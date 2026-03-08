#include "stdio.h"

#define ll long long

ll NOD(ll a, ll b)
{
    while (b != 0)
    {
        ll temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

ll NOK(ll a, ll b)
{
    return a * b / NOD(a, b);
}

int main()
{
    ll a, b;
    scanf("%lld %lld", &a, &b);

    printf("%lld %lld\n", NOD(a, b), NOK(a, b));

    return 0;
}