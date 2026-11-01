#include <string>
#include <vector>
#include <iostream>
#include <stack>
#include <string>
#include <unordered_map>
#include <set>
#include <algorithm>

int maxArea(std::vector<int> &heights)
{
    int l = 0;
    int r = heights.size() - 1;
    int res{};
    while (l < r)
    {
        int min = std::min(heights[l], heights[r]);
        int cur = min * (r - l);
        if (cur > res)
        {
            res = cur;
        }
        if (heights[l] > heights[r])
        {
            r--;
        }
        else
        {
            l++;
        }
    }
    return res;
}

int main()
{
    std::vector<int> nums{1, 7, 2, 5, 4, 7, 3, 6};
    auto res = maxArea(nums);
}