class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>arr1(26,0);
        vector<int>arr2(26,0);
        for(auto it:s1)
        {
            arr1[it-'a']++;
        }
        for(int i=0;i<s1.size();i++)
        {
            arr2[s2[i]-'a']++;
        }
        int p = 0;
        if(arr1==arr2){return true;}
        for(int i=s1.size();i<s2.size();i++)
        {
            int index = s2[i]-'a';
            arr2[index]++;
            int nindex = s2[p]-'a';
            arr2[nindex]--;
            p++;
            if(arr1==arr2){return true;}
        }
        return false;
    }
};
