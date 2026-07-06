#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<ll, ll>;
using pipii = pair<ll, pii>; 
using tiii = tuple<ll, ll, ll>; 

#define all(x) (x).begin(), (x).end()
#define fastio() ios::sync_with_stdio(0); cin.tie(0);

void solve() {
    ll n,k;
    cin >> n >> k;
    vector<ll> N(n);
    for(ll i=0;i<n;i++){
        cin >> N[i];
    }

    ll left = 1;
    ll right = LLONG_MAX;
    
    while(left < right){
        ll mid = ((right - left)/2) + left;
        ll ans = 0;
        bool sw = false;
        for(auto i:N){
            if(i<=mid){
                ans += mid/i;
            }
            if(ans>=k){
                sw = true;
                break;
            }
        }
        
        if(sw == true){
            right = mid;
        }else{
            left  = mid + 1;
        }
    
        
    }
    cout << right;
    return;
}

int main() {
    fastio();
    ll t = 1;
    while (t--) solve();
    return 0;
}