#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(0); cin.tie(0);

void solve() {
    int n;
    int ans = INT_MAX;

    cin >> n;
    
    vector<long long> vec(n);

    for(int i = 0 ; i < n ; i++){
        cin >> vec[i];
    }

    for(int i = 0 ; i < n ; i++){
        int left = 0 ;
        int right = 0;
        
        for(int j = 0 ; j < n ; j++){
            if(vec[j] < vec[i]){
                left++;
            }
            else if(vec[j] > vec[i]){
                right++;
            }
        }
        ans = min(ans, max(left,right));
    }

    cout << ans << "\n";

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