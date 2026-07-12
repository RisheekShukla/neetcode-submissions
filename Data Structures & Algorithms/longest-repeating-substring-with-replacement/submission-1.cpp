class Solution {
public:
    int characterReplacement(string s, int k) {
        if(s.size()==0)
        {
            return 0;
        }
        int i=0;
        int j=0;
        int p=j;
        int initK = k;
        char currKing = s[0];
        int ans = 0;
        int maxAns=0;
        for(j=0;j<s.size();++j)
        {
            if(currKing == s[j])
            {
                ans++;
                continue;
            }
            else if(k>0)
            {
                ans++;
                k--;
            }
            else
            {
                maxAns = max(maxAns,ans);
                ans=1;
                currKing = s[j];
                p = j-1;
                k = initK;
                while(p>=i && k>=0)
                {
                    if(currKing!=s[p])
                    {
                        if(k==0)
                        {
                            break;
                        }
                        k--;
                    }
                    ans++;
                    p--;
                }
            }
        }
            maxAns = max(maxAns,ans);
        return maxAns;
    }
};
