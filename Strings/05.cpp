class Solution
{
public:
    string removeUnwanted(string s)
    {
        string ansString;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] = s[i] - 'A' + 'a';
            }
            if ((s[i] >= '0' && s[i] <= '9') || (s[i] >= 'a' && s[i] <= 'z'))
            {
                ansString.push_back(s[i]);
            }
        }
        return ansString;
    }
    bool isPalindrome(string s)
    {
        string str = removeUnwanted(s);
        int i = 0, j = str.length() - 1;
        while (i <= j)
        {
            if (str[i] != str[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};