#include<bits/stdc++.h>
using namespace std;
int arr[1007];
int mem[1007];
int main(){
    int N,Q;
    cin >> N >> Q;
    int l,r,val;
    for(int i = 1;i <= N;i++){
        cin >> arr[i];
    }
    for(int i = 1;i <= Q;i++){
        cin >> l >> r >> val;
        mem[l] = mem[l] + val;
        mem[r+1] = mem[r+1] - val;
    }
    int sum = 0;
    for(int i = 1;i <= N;i++){
        sum = sum + mem[i];
        arr[i] = arr[i] + sum;
        cout << arr[i] << " ";
    }
return 0;
}
/*
10 2
1 2 2 3 3 3 4 4 4 5
2 4 -2
7 9 3
*/
