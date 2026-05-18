#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pipii = pair<int, pii>; 
using tiii = tuple<int, int, int>; 

#define all(x) (x).begin(), (x).end()
#define fastio() ios::sync_with_stdio(0); cin.tie(0);

void solve() {
    int n;
    cin >> n;

    vector<pair<int, char>> cows(n);
    for(int i = 0 ; i < n ; i++){
        cin >> cows[i].second >> cows[i].first; 
    }
    
    sort(all(cows));

    vector<int> prefixL(n + 1, 0);
    vector<int> prefixG(n + 1, 0);

    for(int i = 0; i < n; i++) {
        prefixL[i + 1] = prefixL[i];
        prefixG[i + 1] = prefixG[i];

        if (cows[i].second == 'L') {
            prefixL[i + 1]++;
        } else if (cows[i].second == 'G') {
            prefixG[i + 1]++;
        }
    }

    int ans = INT_MAX;

    for(int i = 0; i < n; i++) {
        if(i > 0 && cows[i].first == cows[i-1].first) continue;

        int j = i;
        while(j + 1 < n && cows[j+1].first == cows[i].first) {
            j++;
        }

        int liarL = prefixL[i];
        int liarG = prefixG[n] - prefixG[j + 1];

        ans = min(ans, liarL + liarG);
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