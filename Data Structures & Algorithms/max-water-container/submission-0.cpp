class Solution {
public:
    int maxArea(vector<int>& heights) {
        int p = 0;
        int q = heights.size()-1;
        int maxAns = 0;

        while(p<q)
        {
            int edge = min(heights[p],heights[q]);
            maxAns = max(maxAns,edge*(q-p));
            if(heights[p]==heights[q])
            {
                p++;
                q--;
            }
            else if(heights[p]<heights[q])
            {
                p++;
            }
            else
            {
                q--;
            }
        }
        return maxAns;
    }
};
