#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(0); cin.tie(0);

void solve() {
    
    long long n; 
    cin >> n;
    
    if((n > 0 && n < 10) || n==11 ) cout << n << " " << 0 << "\n";
    
    else if(n == 12) cout << 0 << " " << n << "\n";

    else if(n == 10) cout << -1 << "\n";

    else if((n-10)%12==0) cout << 22 << " " << n-22 << "\n";

    else{
        cout << n%12 << " " << n-(n%12) << "\n";
    }
    

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