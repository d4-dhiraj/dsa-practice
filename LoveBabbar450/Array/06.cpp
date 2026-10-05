class Solution
{
public:
    vector<int> findUnion(vector<int> &a, vector<int> &b)
    {
        // code here
        vector<int> ans;
        set<int> st;
        for (int i : a)
        {
            st.insert(i);
        }
        for (int i : b)
        {
            st.insert(i);
        }

        for (int i : st)
        {
            ans.push_back(i);
        }
        return ans;
    }
};