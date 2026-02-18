#include<bits/stdc++.h>
using namespace std;

class myStack {
    queue<int> q;
    queue<int> q2;

  public:

    void push(int x) {
        // Inserts an element x at the top of the stack
        while(!q.empty()){
            q2.push(q.front());
            q.pop();
        }
        q.push(x);
        while(!q2.empty()){
            q.push(q2.front());
            q2.pop();
        }
    }

    void pop() {
        // Removes an element from the top of the stack
        if(q.empty()) return ;
        q.pop();
    }

    int top() {
        // Returns the top element of the stack
        if(q.empty()) return -1;
        return q.front();
        // If stack is empty, return -1
    }

    int size() {
        // Returns the current size of the stack
        return q.size();
    }
};
