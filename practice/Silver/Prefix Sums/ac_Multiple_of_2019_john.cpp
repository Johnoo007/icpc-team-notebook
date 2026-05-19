#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define all(x) (x).begin(), (x).end()
#define fastio() ios::sync_with_stdio(0); cin.tie(0);

void solve() {
    string s;
    cin >> s;
    ll n = s.length();
    ll ans = 0;
    
    vector<ll> num(n+5);
    vector<ll> suffix(n+5, 0); 
    
    for(ll i = 0 ; i < n ; i++ ){
        num[i+1] = s[i] - '0';
    }

    ll power = 1;
    for(ll i = n ; i >= 1 ; i-- ){
        suffix[i] = (suffix[i+1] + (num[i] * power)) % 2019;
        power = (power * 10) % 2019;
    }

    map<ll,ll> umap;

    umap[0] = 1;

    for(ll i = n ; i >= 1 ; i-- ){
        if(umap.count(suffix[i])){
            ans += umap[suffix[i]];
            umap[suffix[i]]++;
        }else{
            umap[suffix[i]]=1;
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