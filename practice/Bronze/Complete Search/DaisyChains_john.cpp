#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pipii = pair<int, pii>; 
using tiii = tuple<int, int, int>; 

#define all(x) (x).begin(), (x).end()
#define fastio() ios::sync_with_stdio(0); cin.tie(0);

vector<float> vec(105);

int main() {
    fastio();
    int n;
    cin >> n;
    
    for(int i = 0 ; i < n ; i++){
        cin >> vec[i];
    }

    int ans = 0;

    for(int i = 0 ; i < n ; i++){
        for(int j = i ; j < n ; j++){
            float aver = 0;
            for(int k = i ; k <= j ; k++){
                aver += vec[k];
            }   aver/=j-i+1;
            
            for(int k = i ; k <= j ; k++){
                if(aver == vec[k]) {
                    ans++;
                    break;
                }
            }
        }    
    }

    cout << ans;

    return 0;
}