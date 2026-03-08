#include <iostream>

int main() 
{
	unsigned long long a, b, c;
    std::cin >> a >> b >> c;

    std::cout << ((a >= b + c) || (b >= a + c) || (c >= a + b) ? "NO\n" : "YES\n");

	return 0;
}
