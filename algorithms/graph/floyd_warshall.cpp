#include<bits/stdc++.h>
using namespace std;
int dist[507][507];
int main(){
    int N,M;
    cin >> N >> M;
    for(int i = 1;i <= N;i++) {
        for(int j = 1;j <= N;j++) {
            if(i!=j){
                dist[i][j] = 10e9 + 7;
            }
        }
    }

    int u,v,w;
    for(int i = 1;i <= M;i++) {
        cin >> u >> v >> w;
        dist[u][v] = dist[v][u] = min(dist[u][v],w);
    }

    for(int i = 1;i <= N;i++) {
        for(int j = 1;j <= N;j++) {
            for(int k = 1;k <= N;k++) {
                dist[k][j] = dist[j][k] = min(dist[j][k],dist[j][i] + dist[i][k]);
            }
        }
    }
    return 0;
}
