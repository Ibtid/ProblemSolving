class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {

        vector<vector<int>> res;
        if (nums.empty())
            return res;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++)
        {

            int front = i + 1;
            int back = n - 1;

            while (front < back)
            {
                int two_sum = nums[front] + nums[back];
                if (two_sum + nums[i] < 0)
                    front++;
                else if (two_sum + nums[i] > 0)
                    back--;
                else
                {
                    vector<int> quadruplet(3, 0);
                    quadruplet[0] = nums[i];
                    quadruplet[1] = nums[front];
                    quadruplet[2] = nums[back];
                    res.push_back(quadruplet);

                    // Processing the duplicates of number 2
                    while (front < back && nums[front] == quadruplet[1])
                        ++front;

                    // Processing the duplicates of number 3
                    while (front < back && nums[back] == quadruplet[2])
                        --back;
                }
            }

            // Processing the duplicates of number 1
            while (i + 1 < n && nums[i + 1] == nums[i])
                ++i;
        }
        return res;
    }
};