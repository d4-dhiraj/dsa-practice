class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rowOrginal = matrix.size();
        int colOrginal = matrix[0].size();
        vector<vector<int>> ans(colOrginal, vector<int>(rowOrginal,0));

        for(int i = 0; i < rowOrginal; i++){
            for(int j = 0; j < colOrginal; j++){
                ans[j][i] = matrix[i][j];

            }
        }
        return ans;
    }
};