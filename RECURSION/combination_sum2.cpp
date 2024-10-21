#include<bits/stdc++.h>
using namespace std;

void printsum(int idx,int target,vector<int>&arr,vector<vector<int>>&ans,vector<int>& ds){
    if(target ==0){
        ans.push_back(ds);
        return;
    }
    for(int i = idx;i<arr.size();i++){
        if(i>idx && arr[i]==arr[i-1]) continue;
        if(arr[i]>target)break;
        ds.push_back(arr[i]);
        printsum(i+1,target-arr[i],arr,ans,ds);
        ds.pop_back();
    }

}

int main(){
vector<int> arr = {3,1,2,1,1,2,5,7};
vector<vector<int>> ans;
vector<int> ds;
sort(arr.begin(),arr.end());
printsum(0,5,arr,ans,ds);
for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size();j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;
}