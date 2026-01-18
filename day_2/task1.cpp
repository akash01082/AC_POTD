// codeforce 2171/A : Shizuku Hoshikawa and Farm Legs
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int count=0;
        int n;
        cin>>n;
        if(n%2==0){
            int chckn=n/2;
            while(chckn>=0){
                count++;
                chckn=chckn-2;
            }
            cout<<count<<endl;
        }
        else 
            cout<<count<<endl;
    }
}