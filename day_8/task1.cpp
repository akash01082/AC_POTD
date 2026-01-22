    #include<bits/stdc++.h>
    using namespace std;
    int maxSubArray(vector<int>& nums) {
        int currsum=0,maxsum=INT_MIN;
        bool check=false;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                check=true;
                break;
            }
            if(maxsum<nums[i])
                maxsum=nums[i];
        }
        if(check){
            for(int i=0;i<nums.size();i++){
                currsum+=nums[i];
                if(currsum<0)
                currsum=0;
                maxsum=max(currsum,maxsum);
            }
        }
        return maxsum;
    }

    int main(){
        vector<int> nums ={5,4,-1,7,8};
        cout<<maxSubArray(nums)<<endl;
    }