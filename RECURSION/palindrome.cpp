#include<bits/stdc++.h>
using namespace std;
bool p(int i,string &s){
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return p(i+1,s);

}

int main(){
    string s ="rajan";
    cout<<p(0,s);
}