#include<bits/stdc++.h>
using namespace std;

int fibDP(int n,vector<int>&v){
    v[0]=0;
    v[1]=1;
    for(int i=2;i<=n;i++){
        v[i]=v[i-1]+v[i-2];
    }
    return v[n];
}

int main(){
    int n=11;
    vector<int>f(n);
    cout<<fibDP(n,f);
    return 0;
}