#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pipii = pair<int, pii>; 
using tiii = tuple<int, int, int>; 

#define all(x) (x).begin(), (x).end()
#define fastio() ios::sync_with_stdio(0); cin.tie(0);

void solve() {
    // Write solution here
    cout << "Hello, ICPC!" << endl;
}

int main() {
    fastio();

    freopen("cowqueue.in", "r", stdin);
    freopen("cowqueue.out", "w", stdout);
    
    int n;
    cin >> n;

    vector<pii> u(n);
    for(int i=0;i<n;i++){
        cin >> u[i].first >> u[i].second;
    }

    sort(u.begin(),u.end());

    ll finish = 0;
    for(int i=0;i<n;i++){
        ll come = u[i].first;
        ll time = u[i].second;
        
        ll start = max(come,finish);

        finish = start + time;
    }

    cout << finish;

    return 0;
}