#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    queue<pair<string,int>>round_robin_scheduling;
    int n,q;
    cin>>n>>q;
    for(int i=0;i<n;i++){
    int x;
    string y;
    cin>>y>>x;
    round_robin_scheduling.push({y,x});
    }
    int t=0;
    while(!round_robin_scheduling.empty()){
        int x=round_robin_scheduling.front().second;
        string y=round_robin_scheduling.front().first;
        if(round_robin_scheduling.front().second>q){
            x-=q;
            round_robin_scheduling.pop();
            round_robin_scheduling.push({y,x});
            //round_robin_scheduling.pop();
            t+=q;
        }
        else{
            x+=t;
            t+=round_robin_scheduling.front().second;
            cout<<y<<" "<<x<<'\n';
            round_robin_scheduling.pop();
        }
    }

    return 0;
}
