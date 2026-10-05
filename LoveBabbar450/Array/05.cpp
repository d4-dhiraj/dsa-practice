class Solution
{
public:
    void segregateElements(vector<int> &arr)
    {
        // code here
        // int j = arr.size() - 1;
        // int i = 0;
        // while(i <= j){
        //     if(arr[i] < 0){
        //         swap(arr[i], arr[j]);
        //         j--;
        //     }
        //     i++;
        // }
        vector<int> ans;
        for (int i : arr)
        {
            if (i >= 0)
            {
                ans.push_back(i);
            }
        }
        for (int i : arr)
        {
            if (i < 0)
            {
                ans.push_back(i);
            }
        }

        arr = ans;
    }
};