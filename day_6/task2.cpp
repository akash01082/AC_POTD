//Code Force 1832/A : New Palindrome
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        bool check=false;
        string s;
        cin>>s;
        for(int i=1;i<s.length()/2;i++){
            if(s[i]!=s[i-1]){
                check=true;
            }
        }
        if(check) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}