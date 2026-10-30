#include <string>
#include <vector>
#include <memory>
#include <iostream>

std::vector<int> productExceptSelf(std::vector<int> &nums)
{
    int product{1};
    std::vector<int> prefix(nums.size());
    std::vector<int> suffix(nums.size());
    std::vector<int> result(nums.size());

    for (int i = 0; i < nums.size(); i++)
    {
        product *= nums[i];
        prefix[i] = product;
    }
    product = 1;
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        product *= nums[i];
        suffix[i] = product;
    }
    int l = -1;
    int r = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (i == 0)
        {
            result[0] = suffix[r];
        }
        else if (i == nums.size() - 1)
        {
            result[i] = prefix[l];
        }
        else
        {
            result[i] = prefix[l] * suffix[r];
        }
        l++;
        r++;
    }
    return result;
}

int main()
{
    std::vector<int> nums{1, 2, 4, 6};

    auto result = productExceptSelf(nums);
}