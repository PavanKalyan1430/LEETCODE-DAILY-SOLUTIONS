class MinStack {
public:

    stack <int> st, minst;
    int mini = INT_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
        
        st.push(val);

        if (minst.empty()) minst.push(val);

        else{
            int element = min(minst.top(), val);
            minst.push(element);
        }

        

        
    }
    
    void pop() {
        st.pop();
        minst.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {

        if (minst.empty()) return 0;
        else return minst.top();
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