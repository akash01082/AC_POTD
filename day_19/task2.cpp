// Leet Code 1689 : Partitioning Into Minimum Number Of Deci-Binary Numbers

#include<bits/stdc++.h>
using namespace std;

int minPartitions(string n) {
    int res=0;
    for(char ch: n){
        int curr=ch-'0'; 
        res=max(res,curr);
    }
    return res;
}