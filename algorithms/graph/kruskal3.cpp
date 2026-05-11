#include<bits/stdc++.h>
using namespace std;
#define piii pair<int,pair<int,int>>
priority_queue<piii,vector<piii>,greater<piii>> PQ;
int root[2007];
int parent(int n){
    if(root[n] == n){
        return n;
    }
    return root[n] = parent(root[n]);
}
void union_find(int a,int b){
    root[parent(a)] = root[parent(b)];
}
int main(){
    int N,E; // Node Edge
    cin >> N >> E;
    int u,v,w; // beginnode endnode weight or distance
    for(int i = 1;i <= E;i++){
        cin >> u >> v >> w;
        PQ.push({w,{u,v}});
    }
    for(int i = 0;i <= N;i++){
        root[i] = i;
    }
    int sum = 0;
    while(!PQ.empty()){
        int dist = PQ.top().first;
        int a = PQ.top().second.first;
        int b = PQ.top().second.second;
        PQ.pop();
        if(parent(a) != parent(b)){
            sum = sum + dist;
            union_find(a,b);
        }
    }
    cout << sum;
return 0;
}
/*
7 9
5 7 26
2 1 30
4 5 24
6 1 12
2 3 18
7 2 16
3 4 14
6 5 27
7 4 20
*/
