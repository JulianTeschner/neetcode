#include <string>
#include <vector>
#include <iostream>
#include <stack>
#include <string>
#include <unordered_map>
#include <cctype>

bool isPalindrom(std::string s)
{
    std::string alphanumeric{};

    for (char c : s)
    {
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
        {
            alphanumeric.push_back(std::tolower(c));
        }
    }
    int l = 0;
    int r = alphanumeric.size() - 1;

    while (l < r)
    {
        if (alphanumeric[l] != alphanumeric[r])
        {
            return false;
        }
        l++;
        r--;
    }

    return true;
}

int main()
{
    std::string s = "Was it a car or a cat I saw?";
    auto res = isPalindrom(s);
    printf("%d\n", res);
}