//Leet 682 : Baseball Game
#include<bits/stdc++.h>
using namespace std;
int calPoints(vector<string>& operations){
    vector<int> result;
    for(int i=0;i<operations.size();i++){
        string str =operations[i];
        if(str=="C"){
            result.pop_back();
        }
        else if (str=="D"){
             int Double=2*(result[result.size()-1]);
             result.push_back(Double);
        }
        else if(str=="+"){
            int add=result[result.size()-1] + result[result.size()-2];
            result.push_back(add);
        }else{
            int num = stoi(operations[i]);
            result.push_back(num);
        }
    }
    int sum=0;
    for(int it: result){
        sum+=it;
    }
    return sum;

}
int main(){
    vector<string> ops = {"5","-2","4","C","D","9","+","+"};
    cout<<calPoints(ops)<<endl;
}