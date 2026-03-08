#include <iostream>
#include <vector>
#include <utility>
#include <string>

using ll = long long;

int main() 
{
	ll n;
    std::cin >> n;

    std::vector<std::pair<std::string, std::string>> a;
    for (ll i = 0; i < n; ++i) {
        std::string first, second;
        std::cin >> first >> second;
        std::pair<std::string, std::string> pair = {first, second};
        a.push_back(pair);
    }

    std::string find;
    std::cin >> find;

    for (auto elem : a)
        if (elem.first == find || elem.second == find)
            std::cout << (elem.first == find ? elem.second : elem.first) << "\n";

	return 0;
}
