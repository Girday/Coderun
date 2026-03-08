#include <iostream>
#include <vector>
#include <cmath>

int main() 
{
	int n;
    std::vector<int> v;
    int f;

    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        int val;
        std::cin >> val;
        v.push_back(val);
    }
    std::cin >> f;

    int res = v[0];
    for (auto elem : v)
        if (std::abs(elem - f) < std::abs(res - f))
            res = elem;

    std::cout << res << "\n";
    
	return 0;
}
