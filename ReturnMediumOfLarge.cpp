#include <iostream>
#include <vector>
#include <string>

int Medium(std::vector<int>& v) 
{
	int min = v[0], max = v[0];
	for (auto& i : v) 
	{
		if (i > max) 
		{
			max = i;
		}
		else 
		{
			if (i < min) 
			{
				min = i;
			}
		}
	}
	return (min + max) / 2;
}

int ReturnMediumOfLarge(std::vector<int>& v,int medium) 
{
	std::vector<int> hamarner;
	int k = 0;
	for (auto& i : v) 
	{
		if (i > medium) 
		{
			hamarner.push_back(k);
		}
		++k;
	}
	std::cout << "Count: ";
	return hamarner.size();
}


int main() 
{
	int n;
	std::cin >> n;

	int i,k;
	std::vector<int> v;

	for (i = 0; i < n; ++i) 
	{
		std::cin >> k;
		v.push_back(k);
	}

	
	std::cout << ReturnMediumOfLarge(v, Medium(v));
}