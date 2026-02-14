//Geeks For Geeks : Reverse a String using 
#include<bits/stdc++.h>
using namespace std;

    string reverse(const string& S) {
        // code here
        stack<int> stk;
        for(int i=0;i<S.size();i++){
            char ch=S[i];
            stk.push(ch);
        }
        string res;
        while(!stk.empty()){
            char ch=stk.top();
            stk.pop();
            res+=ch;
        }
        return res;
    }