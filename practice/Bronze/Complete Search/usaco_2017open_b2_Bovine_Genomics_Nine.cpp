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
    freopen("cownomics.in", "r", stdin);
    freopen("cownomics.out", "w", stdout);
    
    int n;
    int m;
    cin >> n >> m;

    vector<string> spott(n);
    vector<string> norr(n);

    for(int i=0;i<n;i++){
        cin >> spott[i];
    }
    for(int i=0;i<n;i++){
        cin >> norr[i];
    }

    int valid=0;

    for(int i=0;i<m;i++){
        unordered_set<char> spoty;
        unordered_set<char> norm;

        for(int j=0;j<n;j++){
            spoty.insert(spott[j][i]);
        }

        for(int x=0;x<n;x++){
            norm.insert(norr[x][i]);
        }

        bool overlab = false;
        for(char c: spoty){
            if(norm.count(c)){
                overlab=true;
                break;
            }
        }

        if(!overlab) valid++;

    }

    cout<< valid;

    return 0;
}