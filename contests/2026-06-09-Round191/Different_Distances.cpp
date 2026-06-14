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

    // freopen("tttt.in", "r", stdin);
    // freopen("tttt.out", "w", stdout);
    int c;
    cin >> c;
    while(c--){
        int n;
        cin >> n;
        if (n==2){
            cout << "1 2 1 2 2 1 1 2" << "/n";
        }else{
           for(int i=1;i<=n;i++){
            cout << i << " " << i << " ";
        }
        for(int i=1;i<=n-2;i++){
            cout << i << " ";
        }
        cout << n << " " <<  n-1 << " ";
        for(int i=1;i<=n-2;i++){
            cout << i << " ";
        }
        cout << n << " " <<  n-1 << " ";
        cout << "\n"; 
        }
        

    }
    return 0;
}