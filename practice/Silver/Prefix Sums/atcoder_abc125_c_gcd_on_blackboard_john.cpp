#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pipii = pair<int, pii>; 
using tiii = tuple<int, int, int>; 

#define all(x) (x).begin(), (x).end()
#define fastio() ios::sync_with_stdio(0); cin.tie(0);

int main() {
    fastio();
    int n;
    cin >> n;
    vector<ll> num(n+2);
    vector<ll> prefix(n+2);
    vector<ll> suffix(n+2);

    ll ans=0;

    for(int i=1 ; i<=n ; i++){
        cin >> num[i];
    }
    for(int i=1 ; i<=n ; i++){
        prefix[i] = gcd(prefix[i-1],num[i]);
        int j = n-i+1;
        suffix[j] = gcd(suffix[j+1],num[j]);
    }
    for(int i=1 ; i<=n ; i++){
        ans = max(ans, gcd(prefix[i-1], suffix[i+1]));
    }
    cout<<ans;
    return 0;
}