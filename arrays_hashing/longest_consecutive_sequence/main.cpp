#include <iostream>
#include <vector>
#include <unordered_set>

int longestConsecutive(std::vector<int> &nums)
{
    std::unordered_set<int> input(nums.begin(), nums.end());
    int length = 0;
    for (auto num : input)
    {
        auto current = 1;
        if (input.find(num - 1) != input.end())
        {
            continue;
        }
        else
        {
            while (true)
            {
                if (input.find(num + current) != input.end())
                {
                    current += 1;
                }
                else
                {
                    if (current > length)
                    {
                        length = current;
                    }
                    break;
                }
            }
        }
    }
    return length;
}
int main()
{
    // std::vector nums{2, 20, 4, 10, 3, 4, 5};
    std::vector nums{2, 20, 4, 10, 3, 4, 5};
    longestConsecutive(nums);
}