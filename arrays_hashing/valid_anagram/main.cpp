#include <string>
#include <array>
#include <iostream>

bool isAnagram(std::string s, std::string t)
{
    std::array<int, 26> letters_s{};
    std::array<int, 26> letters_t{};

    if (s.size() != t.size()) {
        return false;
    }

    for (int i = 0; i <= s.size(); i++)
    {
        int i_s = s[i] - 'a';
        letters_s[i_s] += 1;

        int i_t = t[i] - 'a';
        letters_t[i_t] += 1;
    }
    if (letters_s == letters_t) {
        return true;
    } 

    return false;
}

int main()
{
    std::string s = "racecar";
    std::string t = "carraca";
    auto ret = isAnagram(s, t);
    printf("%d\n", ret);
}