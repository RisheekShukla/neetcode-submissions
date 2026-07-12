class MinStack {
public:
    vector<pair<int,int>>stack;
    int ind;
    int minM;
public:
    MinStack() {
        ind = -1;
        minM = INT_MAX;
    }
    
    void push(int val) {
        minM = min(minM,val);
        stack.push_back({val,minM});
        ind++;
    }
    
    void pop() {
        stack.pop_back();
        ind--;
        if(ind>-1)
        {
            minM = stack[ind].second;
        }
        else
        {
            minM = INT_MAX;
        }
        
    }
    
    int top() {
        return stack[ind].first;
    }
    
    int getMin() {
        return minM;
    }
};
