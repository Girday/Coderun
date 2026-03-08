#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    int d = b * b - 4 * a * c;

    if (d < 0)
        std::cout << 0 << "\n";
    else if (d == 0) {
        std::cout << 1 << "\n";
        std::cout << std::setprecision(7) << (-b + std::sqrt(d)) / 2 / a << "\n";
    } else {
        double x1 = (-b - std::sqrt(d)) / 2 / a;
        double x2 = (-b + std::sqrt(d)) / 2 / a;

        std::cout << 2 << "\n";
        std::cout << std::setprecision(7) << x1 << " " << x2 << "\n";
    } 

    return 0;
}
