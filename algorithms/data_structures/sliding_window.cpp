#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {1,2,5,6,7,8,8,10};
    int k = 2,ans = 0;
    int i = 0, n = sizeof(arr) / sizeof(arr[0]);;

    for(int j = 1 ; j < n ; j++){
        while (arr[j] - arr[i] >  k) {
                ++i;
            }
        ans = max(ans, j - i + 1);

//        for(int x = i ; x <= j ; x++){
//            cout<<arr[x]<<" ";
//        }
//        cout<<endl;

    }

    cout<<"ans = "<<ans;
}

