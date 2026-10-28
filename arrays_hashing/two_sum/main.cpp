#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>

std::vector<int> twoSum(std::vector<int> &nums, int target)
{
    // value , index
    std::unordered_map<int, int> diff_map{};
    std::vector<int> ret{};

    int index = 0;
    for (auto i : nums)
    {
        
        auto diff = target - i;
        auto it = diff_map.find(diff);
        if (it != diff_map.end())
        {
            ret.push_back(it->second);
            ret.push_back(index);
            return ret;
        }
        else {
            diff_map.insert({i, index});
        }
        index++;
    }
}

int main()
{
    std::vector nums{3, 4, 5, 6};
    int target = 7;
    auto ret = twoSum(nums, target);
    for (auto i : ret)
    {

        printf("%d\n", i);
    }
}