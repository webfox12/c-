#include<bits/stdc++.h>
using namespace std;
void f(int idx,vector<int> &v,int s,int sum, int arr[],int n){
    if(idx==n){
       
        if(s == sum){
            for(auto it:v){
                cout<<it<<" ";
            }
            cout<<endl;
        }
    return;
    }
    v.push_back(arr[idx]);
    s +=arr[idx];
    f(idx+1,v,s,sum,arr,n);
     v.pop_back();
     s -=arr[idx];
    f(idx+1,v,s,sum,arr,n);
   
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