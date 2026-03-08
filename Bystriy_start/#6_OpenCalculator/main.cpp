#include <iostream>
#include <unordered_set>
#include <string>

int main() {
    int x, y, z;
    std::cin >> x >> y >> z;
    std::unordered_set<int> digits = {x, y, z};

    std::string n;
    std::cin >> n;
    std::unordered_set<int> number;

    for (auto x : n)
        number.insert(x - '0');

    int count = 0;
    for (auto digit : number)
        if (!digits.count(digit))
            ++count;

    std::cout << "\n" << count << "\n";
}
