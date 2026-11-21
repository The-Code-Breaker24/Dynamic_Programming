#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n<=1) return n;
    return fib(n-1)+fib(n-2);
}

int fibDP(int n,vector<int>&v){
    if(n<=1) return n;
    if(v[n]!=-1){
        return v[n];
    }
    return v[n]=fibDP(n-1,v) + fibDP(n-2,v) ;
}

int main(){
    int n=11;
    vector<int>f(n+1,-1);
    cout<<fibDP(n,f)<<endl;
}