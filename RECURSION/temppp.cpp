#include<bits/stdc++.h>
using namespace std;

void print(vector<int> & ans){
    for(int i=0;i<ans.size();i++){
       
            cout<<ans[i]<<" ";
    }
    cout<<endl;
}

void combination(int idx , int target , vector <int> & ds,vector<int> & v, int n){
    //base
    if(idx>=n) return;
    if(target<0) return;
    if(target == 0){
         print(ds);
         return;
    }
      //pick
    ds.push_back(v[idx]);
    combination(idx,target-v[idx],ds,v,n);
      // not pick
    ds.pop_back();
    combination(idx+1,target,ds,v,n);  
}


int main(){
vector <int> v ={2,3,1,5};
vector<int> ds;
combination(0,7,ds,v,4);
}