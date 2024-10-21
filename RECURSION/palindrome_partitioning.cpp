#include<bits/stdc++.h>
using namespace std;



bool ispalindrome(string s,int start,int end){
    while(start<=end){
        if(s[start++]!=s[end--]){
            return false;
        }
    }
    return true;
}
void f(int idx,string s,vector<vector<string>> & res,vector<string> & path){
    if(idx==s.size()){
        res.push_back(path);
        return ;
    }
    for(int i=idx;i<s.size();i++){
        if(ispalindrome(s,idx,i)){
            path.push_back(s.substr(idx,i-idx+1));
            f(i+1,s,res,path);
            path.pop_back();
        }
    }
}

int main(){
string s ="aadd";
vector<vector<string>> res;
vector<string> path;
f(0,s,res,path);
for(int i=0;i<res.size();i++){
    cout<<"{";
    for(int j=0;j<res[i].size();j++){
        cout<<res[i][j]<<","<<"";
    }
    cout<<"}"<<endl;
}
}