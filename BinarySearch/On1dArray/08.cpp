class Solution
{
public:
    int firstIndex(vector<int> &arr)
    {
        // code here
        int s = 0, e = arr.size() - 1;
        int ans = -1;
        while (s <= e)
        {
            int mid = s + (e - s) / 2;
            if (arr[mid] == 1)
            {
                ans = mid;
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        return ans;
    }
};