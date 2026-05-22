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
    
    int n ;
    cin >> n;

    set<int> a;

    for (int i=0;i<n;i++){
        int temp = 0;
        cin >> temp;
        a.insert(temp);
    }

    cout << a.size();

    
    return 0;
}