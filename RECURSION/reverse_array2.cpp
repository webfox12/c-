#include<bits/stdc++.h>
using namespace std;
void f(int arr[],int n, int i,int j){
    if(i>=2) return;
    swap(arr[i],arr[j]);
    f(arr,n,i+1,j-1);
}
int main(){
    int arr[5]= {1,2,3,4,2,};
    cout<<" before revrese:";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    f(arr,5,0,4);
     cout<<" after revrese:";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}