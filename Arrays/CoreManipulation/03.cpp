class Solution
{
public:
    void reverseArray(vector<int> &arr)
    {
        // code here
        // int last = arr[arr.size()-1];
        int n = arr.size();
        int temp;
        for (int i = 0; i < arr.size() / 2; i++)
        {
            temp = arr[i];
            arr[i] = arr[n - i - 1];
            arr[n - i - 1] = temp;
        }
    }
};