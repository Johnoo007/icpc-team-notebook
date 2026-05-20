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

    freopen("lifeguards.in", "r", stdin);
    freopen("lifeguards.out", "w", stdout);

    int maxi=0;
    int n;
    cin >> n;

    vector<int> start(n);
    vector<int> stop(n);

    for (int i=0;i<n;i++){
        cin >> start[i] >> stop[i];
    }

    for (int i=0;i<n;i++){

        vector<int> time(1000,0);

        for (int j=0;j<n;j++){
            if(j==i){
                continue;
            }

            for (int w=start[j];w<stop[j];w++){
                time[w] = 1;
            }
        }

        int cover=0;
        for(int t=0;t<1000;t++){
            if(time[t]==1){
                cover+=1;
            }
        }

        maxi=max(maxi,cover);
    }
    
    cout << maxi ;


    return 0;
}