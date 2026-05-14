#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pipii = pair<int, pii>; 
using tiii = tuple<int, int, int>; 

#define all(x) (x).begin(), (x).end()
#define fastio() ios::sync_with_stdio(0); cin.tie(0);

bool solve(int k, string str) {
    set<string> s;

    for(int i = 0 ; i <= str.size()-k ; i++){
        string temp="";
        for(int j = i ; j < i+k ; j++){
            temp += str[j];
        }
        if(s.count(temp)){
            return false;
        }
        s.insert(temp);
    }

    return true;
}

int main() {
    fastio();
    int t = 1;
    string str;
    freopen("whereami.in", "r", stdin);
    freopen("whereami.out", "w", stdout);
    cin >> t;
    cin >> str;
    int r = t;
    int l = 1;
    while (r > l){
        int mid = (r+l)/2;
        if(solve(mid,str)){
            r = mid;
        }else{
            l = mid+1;
        }

    } 
    cout<<r;
    return 0;
}