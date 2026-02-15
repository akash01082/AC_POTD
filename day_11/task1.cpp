// Leet Code 66 : Plus One

#include<bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
        vector<int> res;
        int n=digits.size();
        for(int i=n-1;i>=0;i--){
            int dig=digits[i];
            if(i==n-1) dig++;
            if(dig==10 && i!=0){
                res.push_back(0);
                digits[i-1]+=1;
            }else if(dig==10 && i==0){
                res.push_back(0);
                res.push_back(1);
            }else{
                res.push_back(dig);
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }