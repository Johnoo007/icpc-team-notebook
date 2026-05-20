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
    
    ll t;
    cin >> t;

    for(ll i=0;i<t;i++){
        ll r,c;
        cin >> r >> c;

        vector<vector<ll>> rc(r,vector<ll>(c));
        for(ll j=0;j<r;j++){
            for(ll col=0;col<c;col++){
                cin >> rc[j][col];
            }
        }
        

        ll sum=0;
        for(ll j=0;j<c;j++){
            vector<ll> cal;
            for(ll w=0;w<r;w++){
                cal.push_back(rc[w][j]);
            }

            sort(cal.begin(),cal.end());
            
            ll mul=-(r-1);
            for(ll w=0;w<cal.size();w++){
                sum+=mul*cal[w];
                mul+=2;
            }
        }

        

        cout << sum << "\n";
    }

    
    return 0;
}