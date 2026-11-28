#include<bits/stdc++.h>
using namespace std;

int climbing_stairs_tb(int n){
    int prev1=1;
    int prev2=1;
    int result=1;
    for(int i=0;i<n-1;i++){
        result=prev1+prev2;
        prev2=prev1;
        prev1=result;
        //prev1=prev2;
    }
    return result;
}

int main(){
    int n;
    cin>>n;
    cout<<climbing_stairs_tb(n);
    return 0;
}