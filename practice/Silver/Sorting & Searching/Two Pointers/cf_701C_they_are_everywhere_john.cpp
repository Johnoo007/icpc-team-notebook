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
    int n;
    string str;
    cin >> n;
    cin >> str;

    unordered_set<char> num;
    for(int i = 0 ; i < n ; i++){
        num.insert(str[i]);
    }

    int l=0, ans=n;
    unordered_set<char> uniq;
    unordered_map<char,int> count0;

    for(int r = 0 ; r < n ; r++){

        uniq.insert(str[r]);
        count0[str[r]]++;

        while(uniq.size() == num.size()){
            ans = min(ans, r-l+1);
            count0[str[l]]--;
            if(count0[str[l]] == 0){
                uniq.erase(str[l]);
            }
            l++;
        }
    }

    cout << ans;

    return 0;
}