#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

void func(std::vector<std::string>& v1) 
{
	std::reverse(v1.begin(), v1.end());
}
void print(std::vector<std::string>& v) 
{
	for (auto x : v) 
	{
		std::cout << x << "  ";
	}
}

int main() 
{
	std::vector<std::string> v = { "aa" , "bb" , "cc" , "dd" };
	std::cout << "Before Function Call: ";
	print(v);
	func(v);
	std::cout << "After Function Call:  ";
	print(v);
}