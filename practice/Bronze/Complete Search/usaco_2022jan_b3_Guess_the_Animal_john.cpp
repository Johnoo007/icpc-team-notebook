#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pipii = pair<int, pii>; 
using tiii = tuple<int, int, int>; 

#define all(x) (x).begin(), (x).end()
#define fastio() ios::sync_with_stdio(0); cin.tie(0);

vector<set<string>> animals(105);

int main() {
    fastio();
    freopen("guess.in", "r", stdin);
    freopen("guess.out", "w", stdout);
    
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        string animal;
        cin >> animal;
        int temp;
        cin >> temp;
        animals[i] = {};
        for(int j = 0; j < temp ; j++){
            string str;
            cin >> str;
            animals[i].insert(str);
        }
    }
    // for(int i = 0 ; i < n ; i++){
    //     cout << "i = " << i << " ";
    //     for(auto x : animals[i]){
    //         cout << x << " ";
    //     }cout<<endl;
    // }
    int mx=0;
    for(int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j < n ; j++){
            set<string> result = {};
            set_intersection(animals[i].begin(), animals[i].end(), 
                     animals[j].begin(), animals[j].end(),
                     inserter(result, result.begin()));
            mx = max(mx,(int) result.size());

            // for(auto x : result){
            //     cout << x <<" ";
            // }cout<< result.size() <<endl;
        }
    }
    cout<< mx+1;

    return 0;
}