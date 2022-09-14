class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {

        for (int i = 0; i < matrix.size(); i++)
        {
            if (matrix[i][0] == target)
            {
                return true;
            }
            else if (i + 1 < matrix.size())
            {
                if (matrix[i + 1][0] == target)
                {
                    return true;
                }
                else if (matrix[i][0] < target && matrix[i + 1][0] > target)
                {
                    for (int j = 1; j < matrix[i].size(); j++)
                    {
                        if (matrix[i][j] == target)
                        {
                            return true;
                        }
                    }
                }
            }
            else
            {
                for (int j = 1; j < matrix[i].size(); j++)
                {
                    if (matrix[i][j] == target)
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};