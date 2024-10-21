#include<bits/stdc++.h>
using namespace std;
void f(vector<int>& arr,int n,int s,vector<int>& ds){
    for(int i=0;i<n;i++){
        s -= arr[i];
        
        for(int j=i+1;j<n;j++){
            if(s<0){
            break;
        }
            
            if(s==0){
                cout<<"hello";
                ds.push_back(i);
                ds.push_back(j-1);
                break;
            }
            s-=arr[j];
        }
        s+=arr[i];
    }
    if(s>0){
        cout<<"-1";
    }

    
}
void print(vector<int>& ds){
    for(auto i: ds){
        cout<<i<<" ";
    }
}
int main(){
vector<int> arr ={1,2,3,7,5};
int n= arr.size();
vector<int> ds;
f(arr,5,12 ,ds);
 print(ds);
}