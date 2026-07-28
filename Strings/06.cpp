class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        int arr[250] = {0};
        if (s.length() != t.length())
            return false;
        for (int i = 0; i < s.length(); i++)
        {
            char ch = s[i];
            arr[ch]++;
        }
        for (int i = 0; i < t.length(); i++)
        {
            char ch = t[i];
            arr[ch]--;
        }

        for (int i = 0; i < 250; i++)
        {
            if (arr[i] != 0)
            {
                return false;
            }
        }
        return true;
    }
};