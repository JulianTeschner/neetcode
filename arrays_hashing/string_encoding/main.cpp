#include <string>
#include <vector>
#include <memory>
#include <iostream>

std::string encode(std::vector<std::string> &strs)
{
    std::string encoded{};

    for (std::string str : strs)
    {
        encoded.push_back((unsigned char)str.size());

        for (char c : str)
        {
            encoded.push_back(c);
        }
    }
    return encoded;
}

std::vector<std::string> decode(std::string s)
{
    std::vector<std::string> result{};
    int i = 0;
    while (i < s.size())
    {
        int len = (unsigned char)s[i++];
        result.push_back(s.substr(i, len));
        i += len;
    }
    return result;
}

int main()
{
    std::vector<std::string> strs{"Hello", "World"};
    auto res = encode(strs);
    decode(res);
}