#include <iostream>
#include <vector>
#include <string>


std::vector<std::string> func(std::vector<std::string>& v)
{
	std::vector<std::string> tmp;
	
	for (auto it = v.rbegin(); it != v.rend(); ++it) 
	{
		tmp.push_back(*it);
	}
	
	return tmp;
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
	std::vector<std::string> v = { "aa", "bb", "cc", "dd" };
	std::cout << "Vector Before Function Call: ";
	print(v);
	std::cout << "Vector After Function Call: ";
	v = func(v);
	print(v);
}