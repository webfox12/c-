#include<bits/stdc++.h>
using namespace std;

void f(int ind,vector<int> &v,int arr[],int n){
    if(ind>=n){
        for(auto it : v){
            cout<<it<<" ";
            
        }
        cout<<endl;
        return ;
    }
    v.push_back(arr[ind]);
    f(ind+1, v,arr,n);
    v.pop_back();
    f(ind+1, v,arr,n);
}
int main(){
int n;
cin>>n;
int arr[n];
vector<int> v;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
f(0,v,arr,n);
}