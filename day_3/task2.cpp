//Leet 2032 : Two Out of Three
#include<bits/stdc++.h>
using namespace std;
//optimal solution O(n1+n2+n3)
vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3){
    vector<int> ans;
    vector<int> freq1(101,0);
    vector<int> freq2(101,0);
    vector<int> freq3(101,0);

    for(int x: nums1){
        freq1[x]=1;
    }
    for(int x: nums2){
        freq2[x]=1;
    }
    for(int x: nums3){
        freq3[x]=1;
    }
    for(int i=1;i<=100;i++){
        if(freq1[i]+freq2[i]+freq3[i]>=2)
            ans.push_back(i);
    }
}

// bruteforce O(n1*logn1 + n2*logn2 +n3*logn3)
vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
    sort(nums3.begin(),nums3.end());
    vector<int> ans;
    vector<int> counts(101,0);
    for(int i=1;i<counts.size();i++){
        if(binary_search(nums1.begin(),nums1.end(),i))
                counts[i]++;
      if(binary_search(nums2.begin(),nums2.end(),i)){
                counts[i]++;
                if(counts[i]==2)
                    ans.push_back(i);
        }
        if(binary_search(nums3.begin(),nums3.end(),i)){
                counts[i]++;
                if(counts[i]==2)
                    ans.push_back(i);
            }
    }
    return ans;
    }


int main(){

}