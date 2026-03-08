#include <iostream>

int main() 
{
    int n;
    std::cin >> n;

    int t1 = 1, t2 = 1;
    for (int i = 0; i < n; ++i) {
        int temp = t2;
        t2 = t2 + t1;
        t1 = temp;
    }

    std::cout << t2 - 1 << "\n";

	return 0;
}
