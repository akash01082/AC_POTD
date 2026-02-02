// Print 1 to n using Recursion
#include<bits/stdc++.h>
using namespace std;

void printTillN(int n) {

    if(n==1){
        cout<<1<<" ";
        return;
    }
    printTillN(n-1);
    cout<<n<<" ";
}

int main(){
    
}