#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pipii = pair<int, pii>; 
using tiii = tuple<int, int, int>; 

#define all(x) (x).begin(), (x).end()
#define fastio() ios::sync_with_stdio(0); cin.tie(0);

int main() {
    fastio();
    freopen("gymnastics.in", "r", stdin);
    freopen("gymnastics.out", "w", stdout);
    int N,K;

    cin >> K >> N;

    set<pii> uset;
    vector<vector<int>> vec;

    for(int i = 1 ; i <= N ; i++){
        for(int j = 1 ; j <= N ; j++){
            if(i!=j) uset.insert({i,j});
        }        
    }

    for(int i = 1 ; i <= K ; i++){
        vector<int> vectemp;
        int temp;
        for(int j = 1 ; j <= N ; j++){
            cin >> temp;
            vectemp.push_back(temp);
        }
        vec.push_back(vectemp);
    }

    for(int i = 0 ; i < K ; i++){
        for(int j = 0 ; j < N ; j++){
            for(int k = j+1 ; k < N ; k++){
                uset.erase({vec[i][j], vec[i][k]});
            }           
        }
    }

    // for(auto x : uset){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }

    cout << uset.size();

    return 0;
}