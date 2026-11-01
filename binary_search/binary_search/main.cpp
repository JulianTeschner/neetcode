#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>

int search(std::vector<int> &nums, int target)
{
    int l{0};
    int r = nums.size() - 1;
    int m{0};
    while (l <= r)
    {
        m = l + (r - l) / 2;

        if (nums[m] < target)
        {
            l = m + 1;
        }
        else if (nums[m] > target)
        {
            r = m - 1;
        }
        else
        {
            return m;
        }
    }
    return -1;
}

int main()
{
    // std::vector nums{-1, 0, 2, 4, 6, 8};
    std::vector nums{2, 5};
    int tar = 5;
    int ret = search(nums, tar);
    printf("%d\n", ret);
}