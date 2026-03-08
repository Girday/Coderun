#include <iostream>

using ll = long long;

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
    std::cin >> a >> b;

    std::cout << NOD(a, b) << " " << NOK(a, b) << "\n";

    return 0;
}
