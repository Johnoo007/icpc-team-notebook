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
    int mx=INT_MIN; int mn = INT16_MAX;
    for(int i = 0 ; i < n ; i++){
        int temp;
        cin >> temp;
        mx = max(mx,temp);
        mn = min(mn,temp);
    }
    cout<< mx - ((mx+mn)/2)<<"\n";
}

int main() {
    fastio();
    int t = 1;
    // freopen("tttt.in", "r", stdin);
    // freopen("tttt.out", "w", stdout);
    cin >> t;
    while (t--) solve();
    return 0;
}