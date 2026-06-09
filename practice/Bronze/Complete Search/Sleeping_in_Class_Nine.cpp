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
        int p;
        cin >> p;
        vector<int> hr(p);
        for(int i=0;i<p;i++){
            cin >> hr[i];
        }
        ll total = 0;
        for(int i:hr) total+=i;
        int best = 1;
        if(total == 0){
            cout << 0 << "\n";
            continue;
        }
        ll prefix = 0;
        for(int i=0;i<p;i++){
            prefix+=hr[i];
            ll target = prefix;
            if(target == 0 || total % target !=0) continue;

            ll cur = 0;
            int group = 0;
            bool can = true;
            for(int j=0;j<p;j++){
                cur += hr[j];
                if(cur == target){
                    group++;
                    cur = 0;
                }
                else if(cur > target){
                    can = false;
                    break;
                }
            }
            if(can && cur == 0){
                best = max(best,group);
            }

        }

        cout << p-best << "\n";
    }
    return 0;
}