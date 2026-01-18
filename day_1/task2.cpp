//codeforce 546/A : Soldier and Bananas
#include<iostream>
using namespace std;

int main(){
    int k,n,w,totalCost=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++){
        totalCost+=(k*i);
    }
    int borrow=totalCost-n;
    if(borrow<=0) cout<<0<<endl;
    else cout<<borrow<<endl;
    return 0;
}