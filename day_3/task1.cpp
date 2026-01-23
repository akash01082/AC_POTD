//Code Force 1/A : Theater Square
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,m,a;
    cin>>n>>m>>a;
    long long row=1,col=1;
    long long ans;
    if(n%a!=0){
        row=(n/a)+1;
        if(a>=n) row=1;
    } else row=(n/a);

    if(m%a!=0){
        col=(m/a)+1;
        if(a>m) col=1;
    } else col=(m/a);
    ans=row*col;
    cout<<(ans)<<endl;
}