class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> store;
        for(auto it: nums)
        {
            store[it]++;
        }
        vector<pair<int,int>> ourStore;
        for(auto it: store)
        {
            ourStore.push_back({it.second,it.first});
        }
        sort(ourStore.begin(),ourStore.end(),greater<>());
        vector<int>ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(ourStore[i].second);
        }
        return ans;
    }
};
