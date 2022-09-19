class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        unordered_map<int, int> sums;
        int sum = 0, ans = 0;
        sums[0] = 1;
        for (auto it : nums)
        {
            sum += it;
            int find = sum - k;
            if (sums.find(find) != sums.end())
            {
                ans += sums[find];
            }
            sums[sum]++;
        }
        return ans;
    }
};