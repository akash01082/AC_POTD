// Code Force 1703/C : Cypher

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int idx=0;
        for(int j=0;j<n;j++)
        {
            int num;
            char ch;
            cin>>num;
            for(int i=0;i<num;i++){
                cin>>ch;
                if(ch=='D')
                    arr[idx]++;
                else
                    arr[idx]--;
                if(arr[idx]==10)
                    arr[idx]=0;
                if(arr[idx]==-1)
                    arr[idx]=9;
            }
            idx++;
        }

        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}