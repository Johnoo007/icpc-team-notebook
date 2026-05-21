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
    int ans=INT_MAX;
    cin >> n;
    vector<int> vec( (2*n) + 5 );
    for(int i = 0 ; i < 2 * n ; i++){
        cin >> vec[i];
    }sort(vec.begin(), vec.begin()+(2*n));
    
    vector<int> temp;
    for(int i = 0 ; i < 2 * n ; i+=1){
        for(int j = i+1 ; j < 2 * n ; j+=1){
            for(int k = 0 ; k < 2*n ; k+=1){
                if(k==i)continue;
                if(k==j)continue;
                temp.push_back(vec[k]);
            }
            int cal=0;
            for(int k = 0 ; k < (2*n) - 2; k+=2){
                cal += temp[1+k] - temp[k];
            }
            ans = min(ans,cal);
            temp.clear();
        }    
    }

    cout<<ans;
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