#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pipii = pair<int, pii>; 
using tiii = tuple<int, int, int>; 

#define all(x) (x).begin(), (x).end()
#define fastio() ios::sync_with_stdio(0); cin.tie(0);

void solve() {
    // Write solution here
    ll N,K, ans=0;
    cin>>N>>K;
    vector<ll> vec;
    vector<ll> dis(N+5);
    
    for(int i = 0 ; i < N ; i++){
        ll temp;
        cin>>temp;
        vec.push_back(temp);
    
        if(i != 0){
            dis[i] = vec[i] - vec[i-1];
        }
    }
    ans = K+1;
    for(int i = 0 ; i < N ; i++){
       if(dis[i] <= K){
           ans += dis[i];
       }else{
            ans += K + 1;
       } 
    }
    cout << ans;
}

int main() {
    fastio();
    int t = 1;
    // freopen("tttt.in", "r", stdin);
    // freopen("tttt.out", "w", stdout);
    // cin >> t;
    while (t--) solve();
    return 0;
}