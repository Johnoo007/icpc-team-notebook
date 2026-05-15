#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pipii = pair<int, pii>; 
using tiii = tuple<int, int, int>; 

#define all(x) (x).begin(), (x).end()
#define fastio() ios::sync_with_stdio(0); cin.tie(0);

void solve() {
    // input
    vector<pii> vec;
    int n = 0; 
    int mx=INT_MIN;
    cin >> n;

    
    for(int i = 0 ; i < n ; i++){
        int l,r;
        cin>>l>>r;
        vec.push_back({l,r});
    }sort(all(vec));

    // process

    for(int i = 0 ; i < n ; i++){

        // Simulate case that fire lifeguard number i
        vector<pair<int,int>> sim;
        vector<pair<int,int>> mergeSim;
        for(int j = 0 ; j < n ; j++){
            if(j!=i){
                sim.push_back(vec[j]);
            }
        }

        // Merge interval

        int start=sim[0].first;
        int stop=sim[0].second;
        for(int j = 1 ; j < sim.size() ; j++){
            if(sim[j].first <= stop){
                stop = max(stop,sim[j].second);
            }else{
                mergeSim.push_back({start,stop});
                start = sim[j].first;
                stop = sim[j].second;
            }
        }mergeSim.push_back({start,stop});

        // Calculate after merge interval

        int cal=0;
        for(auto x : mergeSim){
            cal += x.second-x.first;
        }
        mx = max(mx,cal);
    }

    // outpur

    cout<<mx;

    
}

int main() {
    fastio();
    int t = 1;
    freopen("lifeguards.in", "r", stdin);
    freopen("lifeguards.out", "w", stdout);
    // cin >> t;
    while (t--) solve();
    return 0;
}