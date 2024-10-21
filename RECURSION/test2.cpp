#include<bits/stdc++.h>
using namespace std;

void findsum(int idx,int target,vector<int> &ds,vector<int> &v,int n){

    if(idx>=n) return;
    if(target<0) return;
    if(target ==0){
        for(int i=0;i<ds.size();i++ ) cout<<ds[i]<<" ";
         cout<<endl;
        return;
    }

    ds.push_back(v[idx]);
    findsum(idx,target-v[idx],ds,v,n);

    ds.pop_back();
    findsum(idx+1,target,ds,v,n);
}

int main(){
vector<int> v={1,2,3,4};
vector<int> ds;

findsum(0,7,ds,v,4);

}