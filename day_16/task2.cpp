// Leet Code 151: Reverse Words in a String

#include<bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
    stack<string> ans;
    string temp="";
    for(char &ch : s){
        if(ch!=' '){
            temp+=ch;
        }else{
            if(temp!=""){
            ans.push(temp);
            temp="";
            }
        }
    }
    if(temp!="") ans.push(temp);
    string res;
    while (!ans.empty())
    {
        res+=ans.top();
        ans.pop();
        if(!ans.empty()) res+=" ";
    }
    return res;
}