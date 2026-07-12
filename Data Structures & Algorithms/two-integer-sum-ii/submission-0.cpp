class Solution {
public:
    vector<int> twoSum(vector<int>& s, int target) {
        int i=1;
        int j= s.size();
        int p,q;
        while(i<j)
        {
            int sum = s[i-1]+s[j-1];
            if(sum==target)
            {
                p = i;
                q = j;
                break;
            }
            else if(sum>target)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return {p,q};
    }
};
