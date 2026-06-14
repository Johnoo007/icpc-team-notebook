#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(0); cin.tie(0);

void solve() {
    vector<long long> vec;
    
    int n; 
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        long long temp;
        cin >> temp;
        vec.push_back(temp);
    }

    sort(vec.begin(), vec.end(), greater<long long>());
    
    if(n==2){
        cout << vec[0] << " " <<vec[1] << "\n"; 
        return;
    }

    // check
    for(int i = 2 ; i < n ; i++){
        if(vec[i] != vec[i-2]%vec[i-1] ){
            cout << -1 << "\n";
            return;
        }
    }

    cout << vec[0] << " " <<vec[1] << "\n"; 

    return;
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