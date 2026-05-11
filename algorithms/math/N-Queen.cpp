#include <bits/stdc++.h>

using namespace std;

int N;
int total = 0;
bool col[20];
bool dia1[40];
bool dia2[40];

void solve(int row){
    if (row == N) {
        total++;
        return;
    }

    for(int c = 0 ; c < N ; c++){
        if(col[c] || dia1[row+c] || dia2[row - c + N -1]) continue;

        col[c] = dia1[row+c] = dia2[row - c + N -1] = true;
        solve(row+1);
        col[c] = dia1[row+c] = dia2[row - c + N -1] = false;
    }
}

int main()
{
    cin >> N;
    solve(0);
    cout << total << endl;
    return 0;
}
