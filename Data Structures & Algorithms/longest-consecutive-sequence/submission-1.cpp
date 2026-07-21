class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        for(auto it: nums)
        {
            st.insert(it);
        }
        int cont=0;
        for(int i=0;i<nums.size();i++)
        {
            if(st.find(nums[i]-1)==st.end())
            {
                int currnum = nums[i];
                int currcont = 0;
                while(st.find(currnum++)!=st.end())
                {
                    currcont++;
                }
                cont = max(cont,currcont);
            }
        }
        return cont;
    }
};
