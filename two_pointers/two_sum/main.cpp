#include <string>
#include <vector>
#include <iostream>
#include <stack>
#include <string>
#include <unordered_map>

std::vector<int> twoSum(std::vector<int> &numbers, int target)
{
    int l = 0;
    int r = numbers.size() - 1;
    std::vector<int> res{};
    while (true)
    {
        int sum = numbers[l] + numbers[r];
        if (sum > target)
        {
            r--;
        }
        else if (sum < target)
        {
            l++;
        }
        else
        {
            return std::vector{l + 1, r + 1};
        }
    }
}

int main()
{
    std::vector<int> nums{1, 2, 3, 4};
    int target = 3;
    auto res = twoSum(nums, target);
}