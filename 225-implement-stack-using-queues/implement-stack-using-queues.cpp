class MyStack {
public:
    queue<int> nums;
    MyStack() {
        
    }
    
    void push(int x) {
        nums.push(x);
        int sz = nums.size();

        for(int i=0;i<sz-1;i++){
             nums.push(nums.front());
             nums.pop();
        }
    }
    
    int pop() {
        int topVal = nums.front();
        nums.pop();
        return topVal;
    }
    
    int top() {
        return nums.front();
    }
    
    bool empty() {
        return nums.empty();
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