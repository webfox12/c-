
#include<bits/stdc++.h>
using namespace std;
void duplicates(vector<int> & arr,vector<int>& ds) {
        
        for(int i=0;i<arr.size();i++){
            int temp = arr[i];
            int count =0;
            for(int j=i+1;j<arr.size();j++){
                if(arr[j] == temp){
                    count++;
                }
                
            }
            if(count>1){
                ds.push_back(arr[i]);
            }
        }
        // code here
        sort(ds.begin(),ds.end());
       
    }
    void print(vector<int> &ds){
        for(int i=0;i<ds.size();i++){
           cout<<ds[i]<<" ";
        }
    }
    int main(){
    vector<int> arr ={2,3,1,3,2};
    vector<int> ds;
    duplicates(arr,ds);
    print(ds);
    }