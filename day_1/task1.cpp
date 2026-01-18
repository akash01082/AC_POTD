//Leet 1512 : Number of Good Pairs
#include<bits/stdc++.h>
using namespace std;
int numIdenticalPairs(vector<int>& nums) {
    int num=0,n;
    for(int i=0;i<nums.size();i++){
        int n=count(nums.begin() + i + 1, nums.end(), nums[i]);
            num+=n;
        }
    return num;
}

int main(){
    vector<int> nums={1,2,3};
    cout<<numIdenticalPairs(nums)<<endl;
}
