#include<bits/stdc++.h>
using namespace std;
int f(vector<int>& v,int low,int high){
    int idx = v[low];
    int i=low;
    int j= high;
    while(i<j){
        while(v[i]<=idx && i<= high){
            i++;
        }
        while(v[j]>idx && j>= low){
            j--;
        }
        if(i<j) swap(v[i],v[j]);
    }
    swap(v[low],v[j]);
    return j;
}

void qs(vector<int>& v,int low,int high){
   if(low>= high) return;
    //  if(low<high){
    int pivot = f(v,low,high);
    qs(v,low,pivot-1);
    qs(v,pivot+1,high);
    //  }
}
void print(vector<int>& v){
    for(auto i: v) cout<<i<<" ";
}
int main(){
vector<int> v={4,5,3,6,7,2,3,9,3,5,8};
cout<<" before sorting: ";
print(v);
qs(v,0,10);
cout<<endl<<" after sorting: ";
print(v);
}