class MinStack {
public:
        
    stack <pair<int , int>> s;

    MinStack() {
    }
    
    void push(int val) {
        int min = getMin();

        if (s.empty() || min > val){
            min = val;
        }
        
        s.push({val, min});
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        return (s.empty()) ? -1 : s.top().first;
    }
    
    int getMin() {
        return (s.empty()) ? -1 :  s.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */