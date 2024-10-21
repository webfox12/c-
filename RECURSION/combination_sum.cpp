#include<bits/stdc++.h>
using namespace std;
void print(vector<int>& temp){
    for(int i=0;i<temp.size();i++) cout<<temp[i]<<" ";
    cout<<endl;
}
void f(int idx,int target,vector<int>& temp,int n,vector<int>& v){
    //Base Case
    if(idx>=n) return;
    if(target<0) return;
    if(target==0) print(temp);
    //Take
    temp.push_back(v[idx]);
    f(idx,target-v[idx],temp,n,v);
    //No take
    temp.pop_back();
    f(idx+1,target,temp,n,v);
}
int main(){
    vector<int> v={2,3,1,5};
    vector<int> temp;
    f(0,7,temp,4,v);
}