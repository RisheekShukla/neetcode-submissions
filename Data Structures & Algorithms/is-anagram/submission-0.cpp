class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
        {
            return false;
        }
        unordered_map<char,int> st1;
        for(auto it:s)
        {
            st1[it]++;
        }
        for(auto it : t)
        {
            if(st1[it]==0)
            {
                return false;
            }
            st1[it]--;
            if(st1[it]==0)
            {
                st1.erase(it);
            }
        }
        return true;
    }
};
