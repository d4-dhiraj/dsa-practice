class Solution
{
public:
    int countNegatives(vector<vector<int>> &mat)
    {
        // O(mn)
        //  int count = 0;
        //  for(int i = 0; i < mat.size(); i++){
        //      for(int j = 0; j < mat[0].size(); j++){
        //          if(mat[i][j] < 0){
        //              count++;
        //          }
        //      }
        //  }
        //  return count;
        //  O(mlogn)
        int rows = mat.size();
        int cols = mat[0].size();
        int ans = 0;
        for (int i = 0; i < rows; i++)
        {
            int firstNegative = mat[0].size();
            int s = 0, e = cols - 1;

            while (s <= e)
            {
                int mid = s + (e - s) / 2;
                if (mat[i][mid] < 0)
                {
                    firstNegative = mid;
                    e = mid - 1;
                }
                else
                {
                    s = mid + 1;
                }
            }
            int count = mat[i].size() - firstNegative;
            ans += count;
        }
        return ans;
    }
};