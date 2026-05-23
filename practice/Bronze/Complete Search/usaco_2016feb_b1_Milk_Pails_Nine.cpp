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
    
    freopen("pails.in", "r", stdin);
    freopen("pails.out", "w", stdout);
    
    int x = 0;
    int y = 0;
    int z = 0;

    cin >> x >> y >> z;

    int ans;
    for (int i=0;i*y<=z;i++){
        int left = z-(i*y);
        int xt = left/x;
        ans = max(ans,(i*y)+(xt*x));
    }

    cout << ans;

    return 0;
}