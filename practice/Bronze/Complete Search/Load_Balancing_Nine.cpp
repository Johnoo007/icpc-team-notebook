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

    freopen("balancing.in", "r", stdin);
    freopen("balancing.out", "w", stdout);
    int n;
    int b;
    cin >> n >> b; 
    vector<pii> cow(n);
    for(int i=0;i<n;i++){
        cin >> cow[i].first >> cow[i].second;
    }

    int min_c = n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int a = cow[i].first + 1;
            int b = cow[j].second + 1;
            int q1=0,q2=0,q3=0,q4=0;
            for(int k=0;k<n;k++){
                int x=cow[k].first;
                int y=cow[k].second;
                
                if(x>a && y>b)q1++;
                else if(x<a && y>b)q2++;
                else if(x<a && y<b)q3++;
                else if(x>a && y<b)q4++;
            }
            int current = max({q1,q2,q3,q4});

            min_c=min(min_c,current);
        }
    }

    cout << min_c;
    return 0;
}