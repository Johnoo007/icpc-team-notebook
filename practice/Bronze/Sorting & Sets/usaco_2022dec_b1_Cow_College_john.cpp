#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pipii = pair<int, pii>; 
using tiii = tuple<int, int, int>; 

#define all(x) (x).begin(), (x).end()
#define fastio() ios::sync_with_stdio(0); cin.tie(0);

void solve() {
    ll n,money=0,tuition=0;
    cin >> n;
    vector<int> cows(n);
    for(int i = 0 ; i < n ; i++){
        cin >> cows[i];
    }
    sort(all(cows));

    for(int i = 0 ; i < n ; i++){
        if(cows[i]*(n-i) > money){
            tuition = cows[i];
            money = cows[i]*(n-i);
        }
    }

    cout << money << " " << tuition;
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