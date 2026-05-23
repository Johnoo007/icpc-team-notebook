#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define all(x) (x).begin(), (x).end()
#define fastio() ios::sync_with_stdio(0); cin.tie(0);

void solve() {
    ll n,x, ans = 0;
    cin >> n >> x;
    vector<ll> num(n+5);
    vector<ll> prefix(n+5);
    
    for(ll i = 0 ; i < n ; i++ ){
        cin >> num[i+1];
    }

    for(ll i = 1 ; i <= n ; i++ ){
        prefix[i] = prefix[i-1] + num[i];
    }

    map<ll,ll> umap;

    umap[x] = 1;
    for(ll i = 1 ; i <= n ; i++ ){
        if(umap.count(prefix[i])){
            ans += umap[prefix[i]];
        }

        if(umap.count(prefix[i]+x)){
            umap[prefix[i]+x]++;
        }else{
            umap[prefix[i]+x] = 1;
        }
    }

    cout<< ans << "\n";

}

int main() {
    fastio();
    ll t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}