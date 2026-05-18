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
    int n;
    cin >> n;
    
    vector<int> a;
    vector<int> b;
    vector<int> c;
    unordered_map<int,int> mp;

    for(int i = 0 ; i < n ; i++){
        int num;
        cin >> num;
        a.push_back(--num);
    }
    for(int i = 0 ; i < n ; i++){
        int num;
        cin >> num;
        b.push_back(--num);
    }
    for(int i = 0 ; i < n ; i++){
        int num;
        cin >> num;
        c.push_back(--num);
    }

    for(int i = 0 ; i < n ; i++){
        if(mp.count(b[c[i]])){
            mp[b[c[i]]]++;
        }else{
            mp[b[c[i]]]=1;
        }
    }

    // for(auto x: mp){
    //     cout << x.first << " " << x.second << endl;
    // }

    ll ans=0;

    for(auto x : a){
        if(mp.count(x)){
            ans += mp[x];
        }
    }

    cout << ans;

    return 0;
}
/*
4
1 1 1 1
1 1 1 1
1 2 3 4
*/