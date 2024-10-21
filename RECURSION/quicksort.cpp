#include<bits/stdc++.h>
using namespace std;

int f(vector<int> &arr,int low,int high){
    int pivot =arr[low];
    int i=low;
    int j= high;
    while(i<j){
        while(arr[i]<=pivot && i<=high){ // moving index until not find greater value
            i++;
        }
        while(arr[j]>pivot && j>=low){ // note eqaul to not included
            j--;
        }
        if(i<j)swap(arr[i],arr[j]); 
    }
    swap(arr[low],arr[j]);
    return j;
}
void qs(vector<int>&arr,int low,int high){
    if(low== high) return;
    if(low<high){
        int p= f(arr,low,high);
        qs(arr,low,p-1);
        qs(arr,p+1,high);
    }
}
void print(vector<int> &arr){
    for(auto it : arr){
        cout<<it<< " ";
    }
}

int main(){
vector<int> arr={4,6,4,5,8,1,2,35,4,8};
qs(arr,0,9);
print(arr);

}