#include<bits/stdc++.h>
using namespace std;
void find(int idx,int sum,vector<int>& v,vector<int>& ds,int n){
    if(idx==n){
        ds.push_back(sum);
        return;
    }
    find(idx+1,sum+v[idx],v,ds,n); // pick
    find(idx+1,sum,v,ds,n);  // not pick
}
void print (vector<int>& v){
    for(auto i: v) cout<<i<<" ";
}

int main(){
vector<int> v ={3,1,2};
vector<int> ds;

find(0,0,v,ds,v.size());
sort(ds.begin(),ds.end());
print (ds);
}