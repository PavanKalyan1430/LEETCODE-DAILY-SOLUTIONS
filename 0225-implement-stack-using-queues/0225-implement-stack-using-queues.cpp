class MyStack {
public:

    queue<int> add;
    queue<int> del;

    MyStack() {
        
    }
    
    void push(int x) {
        add.push(x);
    }
    
    int pop() {
        
        while (add.size() > 1){
            del.push(add.front());
            add.pop();
        }

        int pop_element = add.front();
        //cout<<pop_element<<"  ";
        add.pop();

        while(!del.empty()){
            add.push(del.front());
            del.pop();
        }

        return pop_element;

    }
    
    int top() {

        while (add.size() > 1){
            del.push(add.front());
            add.pop();
        }

        int top_element = add.front();
        add.pop();
        del.push(top_element);

        while(!del.empty()){
            add.push(del.front());
            del.pop();
        }

        return top_element;
    }
    
    bool empty() {
        return add.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */