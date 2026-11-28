#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    queue<int>q;
    while(T){
        int t;
        cin>>t;
        if(t==1){
        int x;
        cin>>x;
        q.push(x);
        }
        if(t==2){
        if(!q.empty()){
            q.pop();
        }
    }
    if(t==3){
        if(q.empty())
            cout<<"Empty!\n";
        else
            cout<<q.front()<<'\n';
    }
    T--;
    }    

}
