class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int num=0,n;
        for(int i=0;i<nums.size();i++){
            int n=count(nums.begin() + i + 1, nums.end(), nums[i]);
            num+=n;
        }
        return num;
    }
};