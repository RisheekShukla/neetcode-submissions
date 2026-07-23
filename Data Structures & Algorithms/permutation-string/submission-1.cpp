class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())
        {
            return false;
        }

        vector<int>charArrayOne(26,0);
        vector<int>charArrayTwo(26,0);

        for(auto it:s1)
        {
            charArrayOne[it-'a']++;
        }

        for(int i=0;i<s1.size();i++)
        {
            charArrayTwo[s2[i]-'a']++;
        }

        if(charArrayOne == charArrayTwo)
        {
            return true;
        }
        int j=0;
        for(int i=s1.size();i<s2.size();i++)
        {
            charArrayTwo[s2[i]-'a']++;
            charArrayTwo[s2[j]-'a']--;
            j++;
            if(charArrayOne == charArrayTwo)
            {
                return true;
            }
        }
        return false;
    }
};
