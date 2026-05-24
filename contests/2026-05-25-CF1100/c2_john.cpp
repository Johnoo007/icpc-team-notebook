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
    cin >> n;
    vector<ll> vec={0};
    vector<ll> vec2={0};
    vector<ll> pre(n+2,0);
    vector<ll> suf(n+2,0);
    vector<ll> ans;
    
    for(int i = 0 ; i < n ; i++){
        ll temp;
        cin >> temp;
        vec.push_back(temp);
        vec2.push_back(temp * (-1));
    }
    for(int i = 1 ; i <= n ; i++){
        pre[i] = pre[i-1] + abs(vec[i]);
    }
    for(int i = n ; i >= 1 ; i--){
        suf[i] = suf[i+1] + vec[i];
    }

    // find last position that flip
    ll pos=-1;
    ll best=suf[1];
    for(int i = 1 ; i <= n ; i++){
        if(vec[i] > 0){
            if(pre[i-1] - vec[i] + suf[i+1] > best){
                pos = i;
                best = pre[i-1] - vec[i] + suf[i+1];
            }
        }
    }


    int status = 1;
    for(int i = pos-1 ; i >= 1 ; i--){
        if(status == 1){
            if(vec[i]>0){
                ans.push_back(i);
                status = 2;
            }       
        }else{
            if(vec2[i]>0){
                ans.push_back(i);
                status = 1;
            }   
        }    
    }
    if (pos != -1) ans.push_back(pos);

    cout<<ans.size()<<"\n";
    for(auto x : ans){
        cout << x <<" ";
    }cout<<"\n";
}

int main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}