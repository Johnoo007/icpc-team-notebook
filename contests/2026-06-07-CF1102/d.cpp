#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define fastio() ios::sync_with_stdio(0); cin.tie(0);

void solve() {
    int n, k;
    cin >> n >> k;
    
    string a, b;
    cin >> a >> b;
    
    ll xa = 0, xb = 0, xc = 0;
    
    for(int i = 0 ; i < n ; i++){
        if(a[i] == '1') xa++;
        if(b[i] == '1') xb++;
        if(a[i] != b[i]) xc++;
    }
    
    ll ya = n - xa;
    ll yb = n - xb;
    ll yc = n - xc;

    ll lenge = (1LL << k) + 1; 
    
    ll num_a = 0, num_b = 0, num_c = 0;
    
    if(k % 2 == 0){
        num_a = lenge / 3 + 1;
        num_b = lenge / 3 + 1;
        num_c = lenge / 3;
    } else {
        num_a = lenge / 3;
        num_b = lenge / 3;
        num_c = lenge / 3;
    }

    ll ans = 0;
    ans += (xa * ya) * num_a + (xb * yb) * num_b + (xc * yc) * num_c;
   
    cout << ans << "\n";
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