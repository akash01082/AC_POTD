//codeforce 1843/B : long long 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long n;
        cin>>n;
        long long sum=0;
        vector<long long> nums;
        for(int i=0;i<n;i++){
            long long number;
            cin>>number;
            nums.push_back(number);
            if(number<0){
                number*=(-1);
            }
            sum+=number;
        }
        long long count=0;
        bool check=false;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                check=true;
            }else if(nums[i]>0){
                if(check)   count++;
                check=false;
            }else{
                if(check) check=true;
            }
            if(i==n-1 && check){
                if(nums[i]==0 && nums[i-1]>0) continue;
                count++;
            }
        }
        cout<<sum<<" "<<count<<endl;
    }
    
}