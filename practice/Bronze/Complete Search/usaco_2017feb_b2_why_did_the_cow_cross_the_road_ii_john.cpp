#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pipii = pair<int, pii>; 
using tiii = tuple<int, int, int>; 

#define all(x) (x).begin(), (x).end()
#define fastio() ios::sync_with_stdio(0); cin.tie(0);

void solve() {
    string alpha = "QWERTYUIOPASDFGHJKLZXCVBNM";
    string str;
    int ans = 0;
    unordered_map<char, pii> umap;
    cin >> str;
    for(int i = 0 ; i < str.size() ; i++){
        if(umap.count(str[i])){
            umap[str[i]].second = i;
        }else{
            umap[str[i]].first = i;
        }
    }

    for(int i = 0 ; i < 26 ; i++){
        //cout<<alpha[i]<<" "<<umap[alpha[i]].first<<" "<<umap[alpha[i]].second<<endl;
        for(int j = i+1 ; j < 26 ; j++){
            bool one = umap[alpha[i]].first < umap[alpha[j]].first && umap[alpha[j]].first < umap[alpha[i]].second;
            bool two = umap[alpha[i]].first < umap[alpha[j]].second && umap[alpha[j]].second < umap[alpha[i]].second;
            if(one == !two){
                ans++;
            }
    }
    }
    
    
    cout << ans << endl;
}

int main() {
    fastio();
    int t = 1;
    // cin >> t;
    freopen("circlecross.in", "r", stdin);
    freopen("circlecross.out", "w", stdout);
    while (t--) solve();
    return 0;
}