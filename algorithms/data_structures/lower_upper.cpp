#include<bits/stdc++.h>
using namespace std;
vector<int> V;
int main(){
    int x;
    for(int i = 1;i <= 10;i++){
        cin >> x;
        V.push_back(x);
    }
    sort(V.begin(),V.end());
    for(int i = 0;i <= 9;i++){
        cout << V[i] << " ";
    }
    auto it1 = lower_bound(V.begin(),V.end(),5); // >= val
    auto it2 = upper_bound(V.begin(),V.end(),5); // > val
    auto it3 = upper_bound(V.begin(),V.end(),5); // <= val
    it3--;
    int c1 = it1 - V.begin(); // it1 - arr
    int c2 = it2 - V.begin();
    int c3 = it3 - V.begin();
    cout << endl;
    cout << &it1 << " " << &it2 << " " << it2 - it1 << endl;
    cout << c1 << " " << V[c1] << endl;
    cout << c2 << " " << V[c2] << endl;
    cout << c3 << " " << V[c3] << endl;
    //sort(arr,arr+n); sort arr
return 0;
}
//1 2 3 4 10 6 7 8 9 5
