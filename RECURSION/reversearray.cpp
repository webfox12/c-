#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void  f(int i,int arr[],int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    f(i+1,arr,n);
    
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"before reverese : ";
for(int i=0;i<n;i++) cout<<arr[i]<<" ";
cout<<endl;
f(0,arr,n);
cout<<"after reverse : ";
for(int i=0;i<n;i++) cout<<arr[i]<<" ";
   return 0;
}