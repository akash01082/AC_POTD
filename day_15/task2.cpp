#include<bits/stdc++.h>
using namespace std;

int main(){
    long long x;
    cin>>x;
    long long res=0,power=1,num;
    while (x>0)
    {
        int dig=x%10;
        num=min(9-dig,dig);
        if(x/10 ==0){
            if(9-dig==0)
                num=x%10;
        }
        res=res+(power*num);
        x/=10;
        power*=10;
    }
    cout<<res<<endl;
}