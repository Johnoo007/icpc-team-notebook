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
    vector<ll> vec;
    vector<ll> ans;
    
    for(int i = 0 ; i < n ; i++){
        ll temp;
        cin >> temp;
        vec.push_back(temp);
    }

    ll plusFlag = -1;
    ll minusFlag = -1; 

    for(int i = 0 ; i < n ; i++){
        if(vec[i] < 0){
            if(plusFlag != -1){
                ans.push_back(plusFlag);
            }
            minusFlag = i;
            plusFlag = -1;
        }else{// plus
            if(plusFlag == -1){
                if(minusFlag != -1){
                    ans.push_back(minusFlag);
                }
            }
            plusFlag = i;
            minusFlag = -1;
        }
    }
    if(plusFlag != -1){
        ans.push_back(plusFlag);
    }

    cout<<ans.size()<<"\n";
    for(auto x : ans){
        cout << x+1 <<" ";
    }cout<<"\n";
}

int main() {
    fastio();
    int t = 1;
    // freopen("tttt.in", "r", stdin);
    // freopen("tttt.out", "w", stdout);
    cin >> t;
    while (t--) solve();
    return 0;
}