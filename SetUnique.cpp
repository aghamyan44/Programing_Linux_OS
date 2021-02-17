#include <iostream>
#include <vector>
#include <string>
#include <set>

int count(const std::vector<std::string>& words)
{
	std::set<std::string> wordsset;
	wordsset.insert(words.begin(), words.end());
	return wordsset.size() - (words.size() - wordsset.size());
}

int main() 
{

	std::vector<std::string> words{"aaa","bbbb","ccc","dddd","aaa","www","bbbb"}; 
	std::string string;

/*	while (std::cin >> string)
	{
		words.push_back(string);
	}
*/

	std::cout << "Chkrknvox barer: " << count(words);
}