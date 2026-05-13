#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pipii = pair<int, pii>; 
using tiii = tuple<int, int, int>; 

#define all(x) (x).begin(), (x).end()
#define fastio() ios::sync_with_stdio(0); cin.tie(0);

void solve() {
    vector<string> board;
    unordered_set<string> ans;

    // input
    for(int i = 0 ; i < 3 ; i++){
        string temp;
        cin >> temp;
        board.push_back(temp);
    }    

    // process

    set<char> checkDia1 = {board[0][0],board[1][1],board[2][2]};
    set<char> checkDia2 = {board[2][0],board[1][1],board[0][2]};

    if(checkDia1.size() <= 2){
        string ans2 = "";
        for(auto x : checkDia1){
            ans2 += x;
        }
        ans.insert(ans2);
    }
    if(checkDia2.size() <= 2){
        string ans2 = "";
        for(auto x : checkDia2){
            ans2 += x;
        }
        ans.insert(ans2);
    }

    for(int i = 0 ; i < 3 ; i++){
        set<char> checkHor;
        set<char> checkVer;
        for(int j = 0 ; j < 3 ; j++){
            checkHor.insert(board[i][j]);
            checkVer.insert(board[j][i]);
        }

        if(checkHor.size() <= 2){
            string ans2 = "";
            for(auto x : checkHor){
                ans2 += x;
            }
            ans.insert(ans2);
        }

        if(checkVer.size() <= 2){
            string ans2 = "";
            for(auto x : checkVer){
                ans2 += x;
            }
            ans.insert(ans2);
        }
    }

    // output

    int num1=0;
    int num2=0;
    for(auto x : ans){
        if(x.size() == 1){
            num1++;
        }else{
            num2++;
        }
    }
    cout<<num1<<endl<<num2;

}

int main() {
    fastio();

    freopen("tttt.in", "r", stdin);
    freopen("tttt.out", "w", stdout);
    
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}