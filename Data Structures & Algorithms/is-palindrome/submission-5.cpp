class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.size()-1;

        while(i<j)
        {
            while(i<s.size() && !isalnum(s[i]))
            {
                i++;
            }
            while(j>0 && !isalnum(s[j]))
            {
                j--;
            }
            if(i>=j)return true;
            if(matchAlphabet(s[i],s[j]))
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    bool matchAlphabet(char a, char b)
    {
        return (tolower(a)!= tolower(b))? true: false;
    }
};
