#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define all(x) (x).begin(), (x).end()
#define fastio() ios::sync_with_stdio(0); cin.tie(0);

void solve() {
    ll n,m;
    ll ans=0;
    cin >> n >> m;
    vector<vector<ll>> vec;
    for(ll i = 0 ; i < n ; i++){
        vector<ll> vectemp;
        for(ll j = 0 ; j < m ; j++){
            ll temp;
            cin >> temp;
            vectemp.push_back(temp);
        }
        vec.push_back(vectemp);
    }

    for(ll j = 0 ; j < m ; j++){
        vector<ll> cal;
        for(ll i = 0 ; i < n ; i++){
            cal.push_back(vec[i][j]);
        }
        sort(all(cal));

        int mul = n-1;

        for(ll i = n-1 ; i >= 0 ; i--){
            ans += cal[i]*mul;
            mul -= 2;
        }

    }

    cout<<ans<<"\n";

}

int main() {
    fastio();
    ll t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}