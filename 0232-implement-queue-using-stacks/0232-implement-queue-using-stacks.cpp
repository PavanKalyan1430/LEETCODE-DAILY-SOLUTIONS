class MyQueue {
public:

    stack <int> enq , deq;
    MyQueue() {
        
    }
    
    void push(int x) {
        enq.push(x);
    }
    
    int pop() {
        while (!enq.empty()){
            deq.push(enq.top());
            enq.pop();
        }
        int front_element = deq.top();
        deq.pop();



        while(!deq.empty()){
            enq.push(deq.top());
            deq.pop();
        }

        return front_element;
    }
    
    int peek() {
        while (!enq.empty()){
            deq.push(enq.top());
            enq.pop();
        }
        int peek_element = deq.top();



        while(!deq.empty()){
            enq.push(deq.top());
            deq.pop();
        }

        return peek_element;
    }
    
    bool empty() {
        return enq.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */