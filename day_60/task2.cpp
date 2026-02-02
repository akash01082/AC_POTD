// print sum of N natural number using recursion
#include<bits/stdc++.h>
using namespace std;

int findSum(int n) {
        // code here
    if(n<1)
        return 0;
    if(n==1){
        return 1;
    }
    int sum=n+findSum(n-1);
    return sum;
}

int main(){

}