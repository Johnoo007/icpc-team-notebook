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

    int test_cases;
    cin >> test_cases;

    while(test_cases--){
        ll n;
        ll ms;
        ll ns;
        ll ai;
        cin >> n >> ms >> ns >> ai;

        ll sp1 = ms + ns;
        ll t1 = (n + sp1 - 1) / sp1;

        ll t2;
        ll during_setup = ms*ai;

        if(n < during_setup) {
            t2 = (n + ms - 1) / ms;
        }else {
            ll sp2 = ms + (10*ns);
            ll after_setup = (n - during_setup + sp2 - 1) / sp2;
            t2 = ai + after_setup;
        }

        cout << min(t1,t2) << "\n";

    }
    
    return 0;
}