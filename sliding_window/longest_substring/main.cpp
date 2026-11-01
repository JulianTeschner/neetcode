#include <string>
#include <vector>
#include <iostream>
#include <stack>
#include <string>
#include <unordered_map>
#include <cctype>
#include <algorithm>
#include <unordered_set>

int lengthOfLongestSubstring(std::string s)
{
    if(s.size() == 0) {
        return 0;
    }
    int l = 0;
    int r = 1;
    int res = 0;
    std::unordered_set<char> chars{};
    chars.insert(s[l]);
    int cur = 1;
    while (r < s.size())
    {
        char next = s[r];
        if (chars.find(next) == chars.end())
        {
            r++;
            chars.insert(next);
            cur++;
        }
        else
        {
            if (cur > res)
            {
                res = cur;
            }
            chars.erase(s[l]);
            cur--;
            l++;
        }
    }
    if (cur > res)
    {
        res = cur;
    }
    return res;
}

int main()
{
    std::string s = "pwwkew";
    lengthOfLongestSubstring(s);
}