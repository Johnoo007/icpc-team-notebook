#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define all(x) (x).begin(), (x).end()
#define fastio() ios::sync_with_stdio(0); cin.tie(0);

void solve() {
    int n, x, s;
    cin >> n >> x >> s;

    string str;
    cin >> str;

    vector<ll> dp(x+5, -1);
    dp[0] = 0;

    for(int i = 0 ; i < n ; i++){
        vector<ll> ndp = dp;

        for(int j = 0 ; j <= x ; j++){
            if(dp[j] == -1) continue;

            if(str[i] == 'I'){ // Introvert
                if(j < x){ // try to open new table
                    ndp[j+1] = max(ndp[j+1], dp[j] + 1);
                }
            }
            else if(str[i] == 'E'){ // Extrovert
                if(j > 0 && dp[j] < j * s){ // try to assign Extrovert
                    ndp[j] = max(ndp[j], dp[j] + 1);
                }
            }
            else{ // Ambivert
                if(j < x){ 
                    ndp[j+1] = max(ndp[j+1], dp[j] + 1);
                }

                if(j > 0 && dp[j] < j * s){
                    ndp[j] = max(ndp[j], dp[j] + 1);
                }
            }
        }

        dp = ndp;
    }

    ll mx = 0;
    for(int i = 0 ; i <= x ; i++){
        mx = max(mx, dp[i]);
    }
    cout << mx << "\n";
}

int main() {
    fastio();

    int t = 1;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}