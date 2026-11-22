#include<bits/stdc++.h>
using namespace std;

int fibtabDP(int n,vector<int>&v){
    v[0]=0;
    v[1]=1;
    for(int i=2;i<=n;i++){
        v[i]=v[i-1]+v[i-2];
    }
    return v[n];
}

int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    vector<int>f(n);
    cout<<fibtabDP(n,f);
    return 0;
}