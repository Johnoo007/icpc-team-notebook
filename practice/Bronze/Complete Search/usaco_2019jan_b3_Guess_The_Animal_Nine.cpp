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

    freopen("guess.in", "r", stdin);
    freopen("guess.out", "w", stdout);
    int n;
    cin >> n;

    vector<vector<string>> S(n);

    for(int i=0;i<n;i++){
        string name;
        int k;

        cin >> name >> k;
        for (int j=0;j<k;j++){
            string c;
            cin >> c;
            S[i].push_back(c);
        } 
    }

    int final_max=0;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int m=0;
            for(string s : S[i]){
                for(string ss : S[j]){
                    if(s == ss){
                        m+=1;
                    }
                }
            }

            final_max=max(final_max,m);
        }   

    }
    
    cout << final_max+1;

    return 0;
}