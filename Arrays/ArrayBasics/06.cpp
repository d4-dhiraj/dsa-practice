#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> getAlternates(vector<int> &arr)
    {
        vector<int> ans;
        // code here
        for (int i = 0; i < arr.size(); i += 2)
        {
            ans.push_back(arr[i]);
        }
        return ans;
    }
};