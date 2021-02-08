#include <iostream>
#include <vector>
#include <string>

void func(std::vector<std::string>& v1, std::vector<std::string>& v2)
{
	for (auto x : v1) 
	{
		v2.push_back(x);
	}
	v1.clear();
}
void print(std::vector<std::string>& v) 
{
	for (auto x : v) 
	{
		std::cout << x << " ";
	}
}
int main()
{
	std::vector<std::string> v = {"aa","bb","cc"};
	std::vector<std::string> v1 = {"dd","ee","ff"};
	
	std::cout << "Vector 1 Before: ";
	print(v);
	std::cout << "Vector 2 Before: ";
	print(v1);

	func(v, v1);

	std::cout << "Vector 1 After: ";
	print(v);
	std::cout << "Vector 2 After: ";
	print(v1);
}