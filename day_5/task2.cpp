//Leet code 2843 : Count Symmetric Integers

#include<bits/stdc++.h>
using namespace std;

int countSymmetricIntegers(int low, int high) {
        int count=0;
        for(int i=low;i<=high;i++){
            if( i>10 && i<100 && i%11==0 )
               count++;
            if(i>=1000){
                int fst=(i/100);
                int snd=i%100;
                int firstSum=(fst%10)+(fst/10);
                int secondSum=(snd%10)+(snd/10);
                if(firstSum==secondSum)
                  count++;
            }
        }
        return count;
    }

int main(){
   cout<<countSymmetricIntegers(1200,1230)<<endl;
}