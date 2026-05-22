class MinStack {
public:
    stack<int> st1;
    MinStack() {
        
    }
    
    void push(int val) {
       st1.push(val);
    }
    
    void pop() {
      st1.pop();
    }
    
    int top() {
        return st1.top();
    }
    
    int getMin() {
        stack<int> res1=st1;
        int res=INT_MAX;
        while(!res1.empty()){
            res=min(res,res1.top());
            res1.pop();
        }
        return res;
    }
};
