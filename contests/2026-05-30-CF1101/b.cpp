#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(0); cin.tie(0);

void solve() {
    long long cake = 0;
    long long mn = LLONG_MAX;
    vector<long long> ans;

    int n;
    cin >> n;
    
    for(int i = 0 ; i < n ; i++){
        long long temp;
        cin >> temp;

        cake += temp;
        // if(temp >= mn){
        //     // dont do
        // }

        if(temp < mn && cake < (i+1) * mn){
            mn = cake / (i+1);
        }

        ans.push_back(mn);
    }

    for(auto x : ans){
        cout << x << " ";
    }cout<<"\n";

}

int main() {
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}