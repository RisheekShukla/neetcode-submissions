class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        
        map<vector<int>, vector<string>> storage;
        for(int i=0;i<s.size();i++)
        {
            vector<int>alphabet(26,0);
            for(char c:s[i])
            {
                alphabet[c-'a']++;
            }
            storage[alphabet].push_back(s[i]);
        }

        vector<vector<string>>ans;
        for(auto it :storage)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};
