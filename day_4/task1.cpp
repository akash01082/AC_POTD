//Leet 1979 : Find Greatest Common Divisor of Array
#include<bits/stdc++.h>
using namespace std;

int findGCD(vector<int>& nums) {
        int min=nums[0], max=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]>max)
              max=nums[i];
            if(nums[i]<min)
              min=nums[i];
        }
        return __gcd(min,max);
    }

    int main(){
        vector<int> nums ={2,5,6,9,10};
        cout<<findGCD(nums)<<endl;
    }