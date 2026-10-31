#include <string>
#include <vector>
#include <iostream>
#include <stack>
#include <string>
#include <unordered_map>

bool isValid(std::string s)
{
    std::stack<char> filo{};
    std::unordered_map<char, char> lookup_table{std::pair{'{', '}'}, std::pair{'[', ']'}, std::pair{'(', ')'}};
    for (auto c : s)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            filo.push(c);
        }
        else
        {
            if (filo.empty())
            {
                return false;
            }
            auto val = filo.top();
            if (lookup_table[val] != c)
            {
                return false;
            }
            else
            {
                filo.pop();
            }
        }
    }
    return true;
}

int main()
{
    std::string s = "([{}])";
    isValid(s);
}