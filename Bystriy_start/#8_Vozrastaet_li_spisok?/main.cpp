#include <iostream>
#include <vector>

int main() 
{
	std::vector<int> list;
    
    int elem;
    while (std::cin >> elem)
        list.push_back(elem);
    
    for (int i = 0; i + 1 < list.size(); ++i)
        if (list[i + 1] <= list[i]) {
            std::cout << "NO\n";
            return 0;
        }
        
    std::cout << "YES\n";

	return 0;
}
