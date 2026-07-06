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
    vector<int> x(n);
    for(int i=0;i<n;i++){
        cin >> x[i];
    }
    int up = 1e8+2;
    int low = INT_MIN;
    for(int i=1;i<n;i++){
        if(x[i]>x[i-1]){
            up = min(up,abs((x[i]+x[i-1])/2));
        }else if(x[i]<x[i-1]){
            low = max(low,abs((x[i]+x[i-1]+1)/2));
        }else{
            continue;
        }
    }
    if(up>=low){
        cout << up << "\n";
    }else{
        cout << -1 << "\n";
    }
    
}

int main() {
    fastio();
    int t = 1;
    cin >> t;

    while (t--) solve();
    return 0;
}