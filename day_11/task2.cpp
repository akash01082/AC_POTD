//Code Force 1367/B : Even Array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int &x : nums){
            cin>>x;
        }
        vector<int> parIdx;
        vector<int> parEl;
        for(int i=0;i<n;i++){
            parIdx.push_back(i%2);
            parEl.push_back(nums[i]%2);
        }
        int count=0,eq=0;
        for(int i=0;i<n;i++){
            if(parIdx[i]!=parEl[i]){
                count++;
                if(parEl[i]%2!=0)// for edge case 1,1,1
                    eq++;
                else    
                    eq--;
            }
        }
        if(count%2==0 && eq==0)
            cout<<count/2<<endl;
        else
            cout<<-1<<endl;
    }
}