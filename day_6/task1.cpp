//Leet Code 1021 : Remove Outermost Parentheses
#include<bits/stdc++.h>
using namespace std;

string removeOuterParentheses(string s) {
        vector<char> temp;
        int count=1;
        for(int i=1;i<s.length();i++){
            if(s[i]=='(')
                count++;
            else   
                count--;
            if(count==0){
                count=1;
                i++;
                continue;
            }
            temp.push_back(s[i]);
        }
        string ans(temp.begin(),temp.end());
        return ans;
    }

    int main(){

    }