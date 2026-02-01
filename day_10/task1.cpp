// Leet Code 415 : Add Strings
#include<bits/stdc++.h>
using namespace std;

string addStrings(string num1, string num2) {
    int n=max(num1.size(),num2.size());
    reverse(num1.begin(),num1.end());
    reverse(num2.begin(),num2.end());

    vector<int> ans;
    num1.resize(n,'0');
    num2.resize(n,'0');
    int carry=0;
    for(int i=0;i<n;i++){
        int sum=(num1[i]-'0')+(num2[i]-'0') +carry;
        carry=sum/10;
        sum%=10;
        ans.push_back(sum);
        if(i==n-1 && carry>0)
            ans.push_back(carry);
    }
    string s;
    for(int i=ans.size()-1;i>=0;i--){
        s+=to_string(ans[i]);
    }
    return s;
}


int main(){
    string num1="9436";
    string num2="34";
    cout<<addStrings(num1,num2);
}