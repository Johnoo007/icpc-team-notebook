#include<bits/stdc++.h>
using namespace std;
queue<pair<int,int>> Q;
int dx[] = {-1,0,1,0};
int dy[] = {0,1,0,-1};
bool vit[107][107];
int arr[107][107];
int main(){
    int R,C;
    cin >> R >> C;
    string str;
    for(int i = 1;i <= R;i++){
        cin >> str;
        for(int j = 1;j <= C;j++){
            if(str[j-1] == '#'){
                arr[i][j] = 0;
            }
            else{
                arr[i][j] = 1;
            }
        }
    }
    /*
    for(int i = 1;i <= R;i++){
        for(int j = 1;j <= C;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    */
    int stro,stc,fnr,fnc;
    cin >> stro >> stc >> fnr >> fnc;
    Q.push({stro,stc});
    while(!Q.empty()){
        int a = Q.front().first;
        int b = Q.front().second;
        Q.pop();
        vit[a][b] = true;
        if(a == fnr && b == fnc){
            cout << "Found";
            return 0;
        }
        for(int i = 0;i < 4;i++){
            int newx = a + dx[i];
            int newy = b + dy[i];
            if(vit[newx][newy]){
                continue;
            }
            else if(arr[newx][newy] == 0){
                continue;
            }
            else{
                Q.push({newx,newy});
            }
        }
    }
    cout << "Not Found";
return 0;
}
/*
6 10
##......##
##.####.##
#....##...
#.##....##
..####.###
##...#...#
*/
