#include<bits/stdc++.h>
using namespace std;

void f(int idx, vector<int> &ds, vector<vector<int>>& ans, vector<int>& v){
    ans.push_back(ds);
    for(int i=idx ; i<v.size() ; i++){
       if(i!=idx && v[i]==v[i-1]) continue;
       ds.push_back(v[i]);
       f(i+1,ds,ans,v);
       ds.pop_back();
    }
}
void print(vector<vector<int>> & ans){
    for(int i=0 ; i<ans.size(); i++){
        for(int j=0 ; j<ans[i].size();j++){
            cout<< ans[i][j] <<" ";
        }
        cout << endl;
    } 
}
int main(){
vector<int> v={3,1,1,2,2};
sort(v.begin(), v.end());
vector<vector<int>> ans;
vector<int>ds;

f(0, ds, ans, v);
 print(ans);

}