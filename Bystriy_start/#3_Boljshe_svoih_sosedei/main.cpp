#include <iostream>
#include <vector>

int main() 
{
    std::vector<long long> vec;

    unsigned long long elem;
    while (std::cin >> elem)
        vec.push_back(elem);

    int count = 0;
    for (int i = 1; i < vec.size() - 1; ++i)
        if ((vec[i - 1] < vec[i]) && (vec[i] > vec[i + 1]))
            ++count;

    std::cout << count << "\n";
    
	return 0;
}
