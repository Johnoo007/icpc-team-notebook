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
    int n;
    cin >> n;
    vector<int> vec;

    for(int i = 0 ; i < n ; i++){
        int temp;
        cin>>temp;
        vec.push_back(temp);
    }

    n--;
    for(int i = vec.size()-1 ; i >= 1 ; i--){
        if(vec[i] > vec[i-1]){
            n--;
        }else{
            break;
        }
    }
    cout<<n;
}

int main() {
    fastio();
    int t = 1;
    freopen("sleepy.in", "r", stdin);
    freopen("sleepy.out", "w", stdout);
    // cin >> t;
    while (t--) solve();
    return 0;
}