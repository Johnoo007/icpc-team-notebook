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
    freopen("angry.in", "r", stdin);
    freopen("angry.out", "w", stdout);
    vector<ll> hay;
    int n;
    cin >> n;

    for(int i = 0 ; i < n ; i++){
        ll temp;
        cin >> temp;
        hay.push_back(temp);
    }sort(all(hay));

    int ans=0;
    for(int i = 0 ; i < n ; i++){
        int count0 = 0;
        vector<bool> check(n, false);
        queue<pair<ll,ll>> q; // <pos, time>

        q.push({i,1});
        check[i] = true;
        count0++;
        while(!q.empty()){
            ll pos = q.front().first;
            ll t = q.front().second;
            q.pop();

            for(int j = 0 ; j < n ; j++){
                if(!check[j] && hay[j] >= hay[pos] - t && hay[j] <= hay[pos] + t){
                    q.push({j,t+1});
                    check[j] = true;
                    count0++;
                }
            }
        }
        ans = max(ans,count0);
    }
    cout << ans;

    return 0;
}