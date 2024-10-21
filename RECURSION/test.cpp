#include<bits/stdc++.h>
using namespace std;

void ps(int idx,vector<int> &ds,vector<int>&arr){
    //base case
    if(idx>=arr.size()){
        for(int i=0;i<ds.size();i++){
             cout<<ds[i]<<" ";
         }
         cout<<endl;
         return;
         }

    //take
    ds.push_back(arr[idx]);
    ps(idx+1,ds,arr);

    //not take
    ds.pop_back();
    ps(idx+1,ds,arr);

}
void printz(vector<int> &ds){
   
}

int main(){
vector<int> arr ={1,2,3};
vector<int> ds;
ps(0,ds,arr);
printz(ds);

}