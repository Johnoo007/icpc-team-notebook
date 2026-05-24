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
    vector<ll> vec1;
    vector<ll> vec2;
    vector<ll> ans;
    int status = 1;
    
    for(int i = 0 ; i < n ; i++){
        ll temp;
        cin >> temp;
        vec1.push_back(temp);
        vec2.push_back(temp * (-1) );
    }

    for(int i = n-1 ; i >= 0 ; i--){
        if(status == 1){
            if(vec1[i]>0){
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