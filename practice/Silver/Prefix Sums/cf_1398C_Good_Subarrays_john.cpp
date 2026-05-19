#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pipii = pair<int, pii>; 
using tiii = tuple<int, int, int>; 

#define all(x) (x).begin(), (x).end()
#define fastio() ios::sync_with_stdio(0); cin.tie(0);

void solve() {
    ll n,ans = 0;
    cin >> n;
    string str;
    cin >> str;
    vector<int> num = {0};
    vector<int> prefix = {0};
    
    for(int i = 0 ; i < str.size() ; i++ ){
        num.push_back(str[i] - '0');
    }

    for(int i = 1 ; i <= n ; i++ ){
        prefix.push_back(prefix[i-1] + num[i]);
    }

    unordered_map<int,int> umap;

    umap[0] = 1;
    for(int i = 1 ; i <= n ; i++ ){
        int x = prefix[i] - i;
        if(umap.count(x)){
            ans += umap[x];
            umap[x]++;
        }else{
            umap[x] = 1;
        }
    }

    cout<< ans << "\n";

}

int main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}