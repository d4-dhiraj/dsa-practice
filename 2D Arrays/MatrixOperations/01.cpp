class Solution
{
public:
    void addMat(vector<vector<int>> &a, vector<vector<int>> &b)
    {
        // Code here
        for (int i = 0; i < a.size(); i++)
        {
            for (int j = 0; j < a[0].size(); j++)
            {
                a[i][j] = a[i][j] + b[i][j];
            }
        }
        // return count;
    }
};