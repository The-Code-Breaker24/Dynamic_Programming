#include<bits/stdc++.h>
using namespace std;

int climbing_stairs(int n,vector<int>&v){
    v[0]=1;
    v[1]=1;
    for(int i=2;i<=n;i++){
        v[i]=v[i-1]+v[i-2];
    }
    return v[n];
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n+1);
    int x=climbing_stairs(n,v);
    cout<<x;
    return 0;
}