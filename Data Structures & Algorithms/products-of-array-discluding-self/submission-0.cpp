class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>leftArray(n,1);
        vector<int>rightArray(n,1);
        int leftMul = 1;
        int rightMul = 1;
        for(int i=0;i<nums.size();i++)
        {
            if(i!=0)
            {
                leftArray[i] = nums[i-1] * leftArray[i-1];
                rightArray[n-i-1] = nums[n-i] * rightArray[n-i];
            }
        }

        vector<int>ans(n);
        for(int i=0;i<n;i++)
        {
            ans[i] = leftArray[i] * rightArray[i];
        }
        return ans;
    }
};
