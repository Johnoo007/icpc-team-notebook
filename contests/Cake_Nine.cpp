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
    int n;
    cin >> n;
    while(n--){
        int nt;
        cin >> nt;
        
        ll sum = 0;
        ll avg = 0;
        ll mina = INT_MAX;

        for(int i=1;i<=nt;i++){
            ll a;
            cin >> a;

            sum += a;
            avg = sum / i;
            mina = min(mina,avg);
            cout << mina << " ";
        }
        cout << "\n";
    }
    return 0;
}