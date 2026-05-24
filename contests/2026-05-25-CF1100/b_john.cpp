#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<ll, ll>;
using pipii = pair<ll, pii>; 
using tiii = tuple<ll, ll, ll>; 

#define all(x) (x).begin(), (x).end()
#define fastio() ios::sync_with_stdio(0); cin.tie(0);

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    for(ll i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    for(ll i = 0 ; i < n ; i++){
        cin >> b[i];
    }
    for(ll i = 0 ; i < n ; i++){
        if(a[i] > b[i]){
            swap(a[i],b[i]);
        }
    }
    ll mx = 0;
    ll sm = 0;
    for(ll i = 0 ; i < n ; i++){
        mx = max(mx, a[i]);
        sm += b[i];
    }
    cout << sm + mx << "\n";
}

int main() {
    fastio();
    ll t = 1;
    // freopen("tttt.in", "r", stdin);
    // freopen("tttt.out", "w", stdout);
    cin >> t;
    while (t--) solve();
    return 0;
}