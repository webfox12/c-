#include<bits/stdc++.h>
using namespace std;
bool f(int idx,vector<int> &v,int s,int sum, int arr[],int n){
    if(idx==n){
       
        if(s == sum){
            for(auto it:v){
                cout<<it<<" ";
            }
            return true;
        }
        else return false;
    }
    v.push_back(arr[idx]);
    s +=arr[idx];
    if(f(idx+1,v,s,sum,arr,n)== true)return true;
     v.pop_back();
     s -=arr[idx];
    if(f(idx+1,v,s,sum,arr,n) == true ) return true;
return false;
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
vector<int> v;
int sum =2;
f(0,v,0,sum,arr,n);
}