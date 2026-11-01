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
            return true;
        }
    }
    return false;
}

bool searchMatrix(std::vector<std::vector<int>> &matrix, int target)
{
    int l{0};
    int r = matrix.size() - 1;
    int m{0};
    while (l <= r)
    {
        m = l + (r - l) / 2;

        if (matrix[m][0] > target)
        {
            r = m - 1;
        }
        else if (matrix[m][matrix[m].size() - 1] < target)
        {
            int a = matrix[m][matrix[m].size() - 1];
            l = m + 1;
        }
        else
        {
            return search(matrix[m], target);
        }
    }
    return false;
}

int main()
{
    // std::vector nums{-1, 0, 2, 4, 6, 8};
    std::vector<std::vector<int>> nums{std::vector{1, 2, 4, 8}, std::vector{10, 11, 12, 13}, std::vector{14, 20, 30, 40}};
    int tar = 10;
    int ret = searchMatrix(nums, tar);
    printf("%d\n", ret);
}