#include <iostream>
#include <string>
#include <vector>


int main()
{
	int m;
	std::cin >> m;
	int i = 0;
	std::vector<int> v(m);

	std::string string;
	std::cout << "Input Command: " << std::endl;

	while (std::cin >> string)
	{
		if (string == "SELL")
		{
			// std::cout << "Input Index: " << std::endl;
			int index;
			std::cin >> index;
			if (v[index] != 0 && v[index] > 0)
			{
				v[index] -= 1;
			}
		}
		if (string == "ADD")
		{
			// std::cout << "Input Index: " << std::endl;
			int index;
			std::cin >> index;
			v[index] += 1;
		}
		if (string == "DUMP")
		{
			// std::cout << "Input Index: " << std::endl;
			int index;
			std::cin >> index;
			std::cout << v[index];
		}
		if (string == "DUMPALL")
		{
			int m = 0;
			for (auto& i : v)
			{
				m += i;
			}
			std::cout << "All Product: " << m;
		}
	}
}