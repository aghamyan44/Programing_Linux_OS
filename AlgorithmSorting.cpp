#include <iostream>
#include <vector>
#include <algorithm>

void print(const std::vector<int>& v) 
{
	for (auto& i : v) 
	{
		std::cout << i  << "  ";
	}
}

int main()
{
	std::vector<int> v = { 5, 7, 4, 2, 8, 6, 1, 9, 0, 3 };
	std::cout << "Vector Not Sorting: ";
	print(v);

	std::sort(v.begin(), v.end(), [](int a, int b) { return a > b; });
	
	std::cout << std::endl << "Vector Sorting: ";
	print(v);
}