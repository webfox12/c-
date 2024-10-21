#include<iostream>
using namespace std;

void f(int i,int n){
    if(i>n) return;
    cout<<i<<" ";
    f(i+1,n);
     //printing after function call means last will print first
}
int main(){
    int n;
    cin>>n;
    f(1,n);
}