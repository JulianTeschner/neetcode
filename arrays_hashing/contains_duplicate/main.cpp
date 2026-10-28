#include <iostream>
#include <vector>
#include <unordered_set>

class Solution
{
public:
    bool hasDuplicate(std::vector<int> &nums)
    {
        std::unordered_set<int> set{};

        for (int i : nums)
        {
            auto ret = set.insert(i);
            if (ret.second == false)
            {
                return true;
            }
        }

        return false;
    }
};

int main()
{
    Solution solution{};
    std::vector data{1, 2, 3, 4};
    auto res = solution.hasDuplicate(data);
    printf("%d\n", res);
}