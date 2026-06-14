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

    for(int i=0;i<n;i++){
        int nt;
        cin >> nt;
        vector<int> time(nt);
        for(int j=0;j<nt;j++){
            cin >> time[j];
        }
        sort(time.begin() , time.end());
        
        int nut = time[nt/2];

        int left = 0;
        int right = 0;

        for(int a : time){
            if(a < nut) left++;
            else if(a > nut) right++;
        }

        cout << max(left,right) << "\n";

    }

    return 0;
}