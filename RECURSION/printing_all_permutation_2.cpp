#include<bits/stdc++.h>
using namespace std;

void f(int idx,vector<int>& v , vector<vector<int>>& ans){

    if(idx==v.size()){
        ans.push_back(v);
        return;
    }
    for(int i=idx;i<v.size();i++){
        swap(v[idx],v[i]);
        f(idx+1,v,ans);
        swap(v[idx],v[i]);  
    }
   
}
 void print(vector<vector<int>>& ans){
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;                    // new line after every element in 2d array
    }
}
int main(){
vector<int> v={1,2,3};
vector<vector<int>> ans;

f(0,v,ans);
print(ans);
}