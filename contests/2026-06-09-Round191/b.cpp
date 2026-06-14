#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(0); cin.tie(0);

void solve() {
    
    long long n; 
    cin >> n;
    
    if (n == 2) {
        cout << "1 2 1 2 2 1 1 2\n";
        return;
    }
    
    // if(n == 3) cout << "1 1 2 1 2 3 1 3 2 2 3 3\n";
    // else if(n==4) cout << "1 4 3 4 4 3 3 1 2 1 2 3 4 2 2 1\n";
    // else if(n==5) cout << "5 3 2 4 1 2 2 4 4 5 3 5 2 1 3 1 5 4 1 3\n";
    // else{
        for(int i = 1 ; i <= n ; i++){
            cout << i << " ";
            cout << i << " ";
        } 

        for(int i = 1 ; i <= n-2 ; i++){
            cout << i << " ";
        }cout << n << " " << n-1 << " ";

        for(int i = 1 ; i <= n-2 ; i++){
            cout << i << " ";
        }cout << n << " " << n-1 << " ";

        
        cout << "\n";
    // }

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

/*
6
3
4
5
6
7
8
*/