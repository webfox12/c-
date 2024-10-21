#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr,int low,int mid,int high){
    int left=low;
    int right=mid+1;
    vector<int> temp;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
        temp.push_back(arr[right]);
        right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
            left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }

}


void mergesort(vector<int> &arr,int low,int high){
    if(low==high) return;
    int mid = (low+high)/2;
    
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
    
}
void printf(vector<int> &arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr.at(i)<<" ";
    }
}
int main(){
vector<int> arr ={1,4,3,5,9};

mergesort(arr,0,4);
cout<<"after mergesort: ";
printf(arr);
}