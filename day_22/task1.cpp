// Leet Code 121 : Best Time to Buy and Sell Stock
#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int> bestBuy(n);
        bestBuy[0]=prices[0];
        int currProfit,maxProfit=0;
        for(int i=1;i<n;i++){
            bestBuy[i]=min(prices[i-1],bestBuy[i-1]);
            currProfit=prices[i]-bestBuy[i];
            maxProfit=max(currProfit,maxProfit);
        }
        return maxProfit;
}

int main(){

}