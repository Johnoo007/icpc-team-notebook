#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<ll, ll>;
using pipii = pair<ll, pii>; 
using tiii = tuple<ll, ll, ll>; 

#define all(x) (x).begin(), (x).end()
#define fastio() ios::sync_with_stdio(0); cin.tie(0);

void solve() {
    // Write solution here
    cout << "Hello, ICPC!" << endl;
}

int main() {
    fastio();

    // freopen("tttt.in", "r", stdin);
    // freopen("tttt.out", "w", stdout);

    ll n;
    cin >> n;

    vector<ll> p(n);

    for(ll i=0;i<n;i++){
        cin >> p[i];
    }

    sort(p.begin(),p.end());

    ll charge = 0;
    ll ans = 0;
    ll total;

    for(ll i=0;i<p.size();i++){

        total = p[i]*(p.size()-i); 
        if(total>ans){
            charge = p[i];
        }
        ans = max(ans, total);
        
    }

    cout<< ans << " " << charge;

    return 0;
}