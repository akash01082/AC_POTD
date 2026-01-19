//codeforce 158/A : Next Round
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int score=nums[k-1];
    int count=0;
    for(int i=0;i<n;i++){
        if(nums[i]>0 && nums[i]>=score)
            count++;
        else
            break;
    }
    cout<<count<<endl;
}