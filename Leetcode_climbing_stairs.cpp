#include<bits/stdc++.h>
using namespace std;

int climbing_stairs(int n,vector<int>&v){
    if (n<=2) return n;
    if(v[n]!=-1){
        return v[n];
    }
    return v[n]=climbing_stairs(n-1,v)+climbing_stairs(n-2,v);
}

int main(){
    int n;
    cin>>n;
    vector<int>v(n+1,-1);
    int x=climbing_stairs(n,v);
    cout<<x;
    return 0;
}