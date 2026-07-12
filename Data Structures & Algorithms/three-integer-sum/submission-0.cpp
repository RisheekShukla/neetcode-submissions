class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<nums.size();i++)
        {
            if (i > 0 && nums[i] == nums[i-1]) continue;
            int target = -nums[i];
            int p = i+1;
            int q = nums.size()-1;
            while(p<q)
            {
                int curSum = nums[p] + nums[q];
                if(curSum == target)
                {
                    ans.push_back({nums[i],nums[p],nums[q]});
                    while (p < q && nums[p] == nums[p+1]) p++;
                    while (p < q && nums[q] == nums[q-1]) q--;
                    p++;
                    q--;
                }
                else if(curSum > target)
                {
                    q--;
                }
                else
                {
                    p++;
                }
            }
        }
        return ans;
    }
};