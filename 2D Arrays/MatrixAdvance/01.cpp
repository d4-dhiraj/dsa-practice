class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        int startrow = 0, startcol = 0;
        int endrow = row - 1, endcol = col - 1;

        while (startrow <= endrow && startcol <= endcol)
        {
            // starting row
            for (int i = startcol; i <= endcol; i++)
            {
                ans.push_back(matrix[startrow][i]);
            }
            startrow++;

            // endingcol
            for (int i = startrow; i <= endrow; i++)
            {
                ans.push_back(matrix[i][endcol]);
            }
            endcol--;
            // endingrow
            if (startrow <= endrow)
            {
                for (int i = endcol; i >= startcol; i--)
                {
                    ans.push_back(matrix[endrow][i]);
                }
                endrow--;
            }

            // startingcol
            if (startcol <= endcol)
            {
                for (int i = endrow; i >= startrow; i--)
                {
                    ans.push_back(matrix[i][startcol]);
                }
                startcol++;
            }
        }
        return ans;
    }
};