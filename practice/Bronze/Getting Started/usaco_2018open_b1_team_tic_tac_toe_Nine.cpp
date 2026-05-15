#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pipii = pair<int, pii>; 
using tiii = tuple<int, int, int>; 

#define all(x) (x).begin(), (x).end()
#define fastio() ios::sync_with_stdio(0); cin.tie(0);

vector<string> player;
int ans1;
int ans2;

void solve() {
    // Write solution here
    cout << "Hello, ICPC!" << endl;
}

int main() {
    fastio();
    int t = 1;
    
    freopen("tttt.in", "r", stdin);
    freopen("tttt.out", "w", stdout);


    for (int i=0;i<3;i++){
        string temp;
        cin>>temp;
        player.push_back(temp);
    }
    
    set<char> check1={player[0][0],player[1][1],player[2][2]};
    set<char> check2={player[0][2],player[1][1],player[2][0]};
    set<char> row1={player[0][0],player[0][1],player[0][2]};
    set<char> row2={player[1][0],player[1][1],player[1][2]};
    set<char> row3={player[2][0],player[2][1],player[2][2]};
    set<char> co1={player[0][0],player[1][0],player[2][0]};
    set<char> co2={player[0][1],player[1][1],player[2][1]};
    set<char> co3={player[0][2],player[1][2],player[2][2]};

    set<char> winner1;
    set<string> winner2;

    if (check1.size()==1){
        for (auto x:check1){
            winner1.insert(x);
    }
    }
    
    if (check2.size()==1){
        for (auto x:check2){
            winner1.insert(x);
    }
    }

    if (row1.size()==1){
        for (auto x:row1){
            winner1.insert(x);
    }
    }

    if (row2.size()==1){
        for (auto x:row2){
            winner1.insert(x);
    }
    }

    if (row3.size()==1){
        for (auto x:row3){
            winner1.insert(x);
    }
    }

    if (co1.size()==1){
        for (auto x:co1){
            winner1.insert(x);
    }
    }

    if (co2.size()==1){
        for (auto x:co2){
            winner1.insert(x);
    }
    }

    if (co3.size()==1){
        for (auto x:co3){
            winner1.insert(x);
    }
    }






    if (check1.size()==2){
        string temp= "";
        for (auto x:check1){
            temp+=x;  
        }
        winner2.insert(temp);
    }
    
    if (check2.size()==2){
        string temp= "";
        for (auto x:check2){
            temp+=x;  
        }
        winner2.insert(temp);
    }

    if (row1.size()==2){
        string temp= "";
        for (auto x:row1){
            temp+=x;  
        }
        winner2.insert(temp);
    }

    if (row2.size()==2){
        string temp= "";
        for (auto x:row2){
            temp+=x;  
        }
        winner2.insert(temp);
    }

    if (row3.size()==2){
        string temp= "";
        for (auto x:row3){
            temp+=x;  
        }
        winner2.insert(temp);
    }

    if (co1.size()==2){
        string temp= "";
        for (auto x:co1){
            temp+=x;  
        }
        winner2.insert(temp);
    }

    if (co2.size()==2){
        string temp= "";
        for (auto x:co2){
            temp+=x;  
        }
        winner2.insert(temp);
    }

    if (co3.size()==2){
        string temp= "";
        for (auto x:co3){
            temp+=x;  
        }
        winner2.insert(temp);
    }

    cout <<  winner1.size() << endl;
    cout <<  winner2.size() << endl;

    return 0;
}