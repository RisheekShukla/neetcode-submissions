class Solution {
int numcheck(string c)
    {
        int ans = std::stoi(c);
        return ans;
    }
    int calculate(int a, int b, string it )
    {
            if(it=="+")
            {
                return a+b;
            }
            if(it=="-")
            {
                return b-a;
            }
            if(it=="*")
            {
                return a*b;
            }
            if(it=="/")
            {
                return b/a;
            }
            return 0;
    }
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        
        for(auto it:tokens)
        {
            if(it!="+" && it!="-" && it!="*" && it!= "/")
            {
                st.push(numcheck(it));
            }
            else
            {
                int s1 = st.top();
                st.pop();
                int s2 = st.top();
                st.pop();
                st.push(calculate(s1,s2,it));
            }
        }
        return st.top();
    }
};
