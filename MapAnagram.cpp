#include <iostream>
#include <string>
#include <map> 
using namespace std;

bool isanagram(string s1, string s2)
{
    int l1 = s1.length();
    int l2 = s2.length();

    map<char, int> m;
    if (l1 != l2) {
        return false;
    }
    for (int i = 0; i < l1; i++) {
        m[s1[i]]++;
    }

    for (int i = 0; i < l2; i++) {
        if (m.find(s2[i]) == m.end()) {
            return false;
        }
        else {
            m[s2[i]]--;
            if (m[s2[i]] == 0) {
                m.erase(s2[i]);
            }
        }
    }
    return m.size() == 0;
}

void check(const std::string& str1, const std::string& str2)
{
    if (isanagram(str1, str2)) {
        std::cout << "The two strings are anagram\n";
    }
    else {
        std::cout << "The two strings are not anagram\n";
    }
    std::cout << std::endl;
}

int main()
{
    
    std::string str1 = "listen";
    std::string str2 = "silent";

    check(str1, str2);

    return 0;
}