
#include<bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            int currSum=0;
            for(int i=0;i<nums.size();i++){
                currSum+=nums[i];
                if(currSum==k)
                    count++;
            }
        }
        return count;
    }

int main(){

}