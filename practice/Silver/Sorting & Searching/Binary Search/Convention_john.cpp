#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pipii = pair<int, pii>; 
using tiii = tuple<int, int, int>; 

#define all(x) (x).begin(), (x).end()
#define fastio() ios::sync_with_stdio(0); cin.tie(0);

int N,M,C;
vector<ll> cow;

bool solve(ll mid) {
    int bus = 0;
    int i = 0;

    while (i < N) {
        bus++;
        int first = i; 
        int cnt = 0;

        while (i < N && cnt < C && cow[i] - cow[first] <= mid) {
            i++;
            cnt++;
        }
    }
    if(bus <= M) return true;
    return false;
}

int main() {
    fastio();
    freopen("convention.in", "r", stdin);
    freopen("convention.out", "w", stdout);
    cin >> N >> M >> C;

    for(int i = 0 ; i < N ; i++){
        ll temp;
        cin >> temp;
        cow.push_back(temp);
    }
    sort(all(cow));

    ll right = pow(10,9);
    ll left = 0;
    while (right > left)
    {
        ll mid = (right-left)/2 + left;
        if(solve(mid)){
            right = mid;
        }else{
            left = mid+1;
        }
    }

    cout << right;
    
    return 0;
}