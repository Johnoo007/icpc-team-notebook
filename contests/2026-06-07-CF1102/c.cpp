#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define fastio() ios::sync_with_stdio(0); cin.tie(0);

void solve() {
    ll n; 
    cin >> n;
    
    vector<ll> num(n);
    vector<ll> ans(n);
    
    for(int i = 0 ; i < n ; i++){
        cin >> num[i];
    }

    for(int i = 0 ; i < n ; i++){
        vector<ll> prefix(n, 0);
        vector<ll> suffix(n, 0);

        for (int step = 1; step < n; step++) {
            int curr = (i + step) % n;
            int prev = (curr - 1 + n) % n; 
            
            prefix[curr] = max(prefix[prev], num[prev]);
        }

        for (int step = 1; step < n; step++) {
            int curr = (i - step + n) % n;
            int nextt = (curr + 1) % n; 
            
            suffix[curr] = max(suffix[nextt], num[curr]);
        }

        ll summ = 0;
        for(int j = 0 ; j < n ; j++){
            summ += min(suffix[j], prefix[j]);
        }

        ans[i] = summ; 
    }

    for(auto x : ans){
        cout << x << " " ;
    }
    cout << "\n";
}

int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}