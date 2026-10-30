#include <iostream>
#include <vector>
#include <unordered_map>

namespace std
{
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> count{};
        vector<vector<int>> freq{nums.size() + 1};

        for (auto num : nums)
        {
            count[num] = 1 + count[num];
        }

        int highest = 0;
        for (auto entry : count)
        {
            freq[entry.second].push_back(entry.first);
            if (entry.second > highest)
            {
                highest = entry.second;
            }
        }

        vector<int> res;
        for (int i = highest; i > 0; i--)
        {
            for (int n : freq[i])
            {
                res.push_back(n);
                if (res.size() == k)
                {
                    return res;
                }
            }
        }
        return res;
    }
}
int main()
{
    std::vector<int> nums{1, 2, 2, 3, 3, 3};
    int k = 2;
    std::topKFrequent(nums, k);
}