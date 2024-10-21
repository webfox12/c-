#include<bits/stdc++.h>
using namespace std;

void f(vector<int>& ds , int fre[] , vector<vector<int>> & ans , vector<int>& v){
    if(ds.size()==v.size()){
        ans.push_back(ds);
        return;
    }
    for(int i=0;i<v.size();i++){
        if(!fre[i]){
            ds.push_back(v[i]);
            fre[i]=1;
            f(ds,fre,ans,v);
            fre[i]=0;
            ds.pop_back();
        }
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
vector<int> v ={1,2,4};
vector<vector<int>> ans;
vector<int> ds;
int fre[v.size()] ={0};
f(ds,fre,ans,v);
print(ans);
}