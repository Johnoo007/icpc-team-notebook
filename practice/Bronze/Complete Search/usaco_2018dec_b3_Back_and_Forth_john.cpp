#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pipii = pair<int, pii>; 
using tiii = tuple<int, int, int>; 

#define all(x) (x).begin(), (x).end()
#define fastio() ios::sync_with_stdio(0); cin.tie(0);

vector<int> barnA;
vector<int> barnB;
unordered_set<int> ans;
int milk = 1000;

void solve(int day) {
    if(day==5){
        ans.insert(milk);
        return;
    }

    if(day%2 == 1){
        for(int i = 0 ; i < barnA.size() ; i++){
            int x = barnA[i];
                        
            milk -= x;
            barnA.erase(barnA.begin() + i);
            barnB.push_back(x);
            solve(day+1);
            barnA.insert(barnA.begin() + i, x);
            barnB.pop_back();
            milk += x;
        }
    }else{
        for(int i = 0 ; i < barnB.size() ; i++){
            int x = barnB[i];
         
            milk += x;
            barnB.erase(barnB.begin() + i);
            barnA.push_back(x);
            solve(day+1);
            barnB.insert(barnB.begin() + i, x);
            barnA.pop_back();
            milk -= x;
        }
    }
    
    
}

int main() {
    fastio();

    freopen("backforth.in", "r", stdin);
    freopen("backforth.out", "w", stdout);

    int temp;
    for(int i = 0 ; i < 10 ; i++){
        cin >> temp;
        barnA.push_back(temp);
    }
    for(int i = 0 ; i < 10 ; i++){
        cin >> temp;
        barnB.push_back(temp);
    }

    solve(1);

    // for(auto x: ans){
    //     cout<< x<<" ";
    // }
    cout<<ans.size();

    return 0;
}