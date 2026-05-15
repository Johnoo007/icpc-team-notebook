#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pipii = pair<int, pii>; 
using tiii = tuple<int, int, int>; 

#define all(x) (x).begin(), (x).end()
#define fastio() ios::sync_with_stdio(0); cin.tie(0);

vector<string> player;
string temp;
int individualWin=0;

void solve() {
    // Write solution here
    freopen("tttt.in", "r", stdin);
    freopen("tttt.out", "w", stdout);
    for(int i=0;i<3;i++){
        cin >> temp;
        player.push_back(temp);
    }
    set<char> cross1={player[0][0],player[1][1],player[2][2]};
    set<char> cross2={player[0][2],player[1][1],player[2][0]};
    set<char> row1={player[0][0],player[0][1],player[0][2]};
    set<char> row2={player[1][0],player[1][1],player[1][2]};
    set<char> row3={player[2][0],player[2][1],player[2][2]};
    set<char> col1={player[0][0],player[1][0],player[2][0]};
    set<char> col2={player[0][1],player[1][1],player[2][1]};
    set<char> col3={player[0][2],player[1][2],player[2][2]};
    set<char> winner1;
    set<string> winner2;

    if (cross1.size()==1){
        for(char x:cross1){
            winner1.insert(x);
        }
    }
    if (cross2.size()==1) {
        for(char x:cross2){
            winner1.insert(x);
        }
    }
    if (row1.size()==1) {
        for(char x:row1){
            winner1.insert(x);
        }
    }
    if (row2.size()==1) {
        for(char x:row2){
            winner1.insert(x);
        }
    }
    if (row3.size()==1) {
        for(char x:row3){
            winner1.insert(x);
        }
    }
    if (col1.size()==1) {
        for(char x:col1){
            winner1.insert(x);
        }
    }
    if (col2.size()==1) {
        for(char x:col2){
            winner1.insert(x);
        }
    }   
    if (col3.size()==1) {
        for(char x:col3){
            winner1.insert(x);
        }
    }    

    if (cross1.size()==2){
        string temp="";
        for(char x:cross1){
            temp+=x;
        }
        winner2.insert(temp);
    }
    if (cross2.size()==2){
        string temp="";
        for(char x:cross2){
            temp+=x;
        }
        winner2.insert(temp);
    }
    if (row1.size()==2){
        string temp="";
        for(char x:row1){
            temp+=x;
        }
        winner2.insert(temp);
    }
    if (row2.size()==2){
        string temp="";
        for(char x:row2){
            temp+=x;
        }
        winner2.insert(temp);
    }
    if (row3.size()==2){
        string temp="";
        for(char x:row3){
            temp+=x;
        }
        winner2.insert(temp);
    }
    if (col1.size()==2){
        string temp="";
        for(char x:col1){
            temp+=x;
        }
        winner2.insert(temp);
    }
    if (col2.size()==2){
        string temp="";
        for(char x:col2){
            temp+=x;
        }
        winner2.insert(temp);
    }
    if (col3.size()==2){
        string temp="";
        for(char x:col3){
            temp+=x;
        }
        winner2.insert(temp);
    }
    cout << winner1.size() << endl;
    cout << winner2.size() << endl;
    }

int main() {
    fastio();
    int t = 1;
    // cin >> t;
    // freopen("tttt.in", "r", stdin);
    // freopen("tttt.out", "w", stdout);
    while (t--) solve();
    return 0;
}