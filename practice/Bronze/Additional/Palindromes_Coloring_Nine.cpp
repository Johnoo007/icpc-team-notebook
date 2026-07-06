#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pipii = pair<int, pii>; 
using tiii = tuple<int, int, int>; 

#define all(x) (x).begin(), (x).end()
#define fastio() ios::sync_with_stdio(0); cin.tie(0);

void solve() {
    int n = 1;
    int k = 1;  
    string s;  
    cin >> n >> k;
    cin >> s;

    map<char,int> m;

    for(auto i:s){
        m[i]+=1;
    }

    int koo=0;
    int kee=0;

    for(auto i:m){
        koo+=i.second/2;
        kee+=i.second%2;
    }

    int ans = 2*(koo/k);
    kee+= 2*(koo%k);

    if (kee>=k){
        ans++;
    }
    
    cout << ans <<"\n";

}

int main() {
    fastio();
    int t;

    // freopen("tttt.in", "r", stdin);
    // freopen("tttt.out", "w", stdout);
    cin >> t;
    
    while (t--) solve();
    return 0;
}