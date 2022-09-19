class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {

        if (nums2.size() > 0)
        {
            for (int i = 0; i < nums1.size(); i++)
            {
                if (i >= m)
                {
                    nums1[i] = 100000;
                }
                if (nums1[i] > nums2[0])
                {
                    swap(nums1[i], nums2[0]);
                    sort(nums2.begin(), nums2.end());
                }
            }
        }
    }
};