//Leet Code 2022 : Convert 1D Array Into 2D Array
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> ans(m,vector<int>(n));
        if(original.size()!=m*n)
          return {};
        int idx=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans[i][j]=original[idx];
                idx++;
            }
        }
        return ans;
    }

int main(){

}