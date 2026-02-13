// Leet Code 345 : Reverse Vowels of String

#include<bits/stdc++.h>
using namespace std;

bool vowelCheck(char ch){
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        return true;
    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        return true;
    return false;
}
string reverseVowels(string s) {
    int n=s.size();
    int i=0,j=n-1;
    while(i<j){
        if(vowelCheck(s[i]) && vowelCheck(s[j])){  
            swap(s[i],s[j]);
            i++;j--;
        }
        else if(!vowelCheck(s[i]))
            i++;
        else if(!vowelCheck(s[j]))
            j--;
    }
    return s;
}