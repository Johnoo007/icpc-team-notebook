#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pipii = pair<int, pii>; 
using tiii = tuple<int, int, int>; 

#define all(x) (x).begin(), (x).end()
#define fastio() ios::sync_with_stdio(0); cin.tie(0);

void solve() {
    // Write solution here

}

int main() {
    fastio();
    int x1,y1,x2,y2,x3,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    int area = (x1*y1) + (x2*y2) + (x3*y3);
    int side = sqrt(area);
    
    if((side*side != area) || max(x1,max(y1,max(x2,max(y2,max(x3,y3))))) > side){
        cout<<-1;
        return 0;
    }

    if((max(x1,y1) == side) && (max(x2,y2) == side) && (max(x3,y3) == side)){ //case1
        if(min(x1,y1) + min(x2,y2) + min(x3,y3) == side){
            cout<<side<<"\n";
            for(int i = 0 ; i < min(x1,y1) ; i++){
                for(int j = 0 ; j < side ; j++){
                    cout<<"A";
                }
                cout<<endl;   
            }
            for(int i = 0 ; i < min(x2,y2) ; i++){
                for(int j = 0 ; j < side ; j++){
                    cout<<"B";
                }
                cout<<endl;   
            }
            for(int i = 0 ; i < min(x3,y3) ; i++){
                for(int j = 0 ; j < side ; j++){
                    cout<<"C";
                }
                cout<<endl;   
            }
            return 0;
        }
    }

    if((max(x1,y1) == side) && (max(x2,y2) != side) && (max(x3,y3) != side)){//case2.1
        if((x2 + x3) == side){
            cout<<side<<"\n";
            for(int i = 0 ; i < min(x1,y1) ; i++){
                for(int j = 0 ; j < side ; j++){
                    cout<<"A";
                }
                cout<<endl;   
            }
            for(int i = 0 ; i < side - min(x1,y1) ; i++){
                for(int j = 0 ; j < x2 ; j++){
                    cout<<"B";
                }
                for(int j = 0 ; j < x3 ; j++){
                    cout<<"C";
                }
                cout<<endl;   
            }
            return 0;
        }
        if((x2 + y3) == side){
            cout<<side<<"\n";
            for(int i = 0 ; i < min(x1,y1) ; i++){
                for(int j = 0 ; j < side ; j++){
                    cout<<"A";
                }
                cout<<endl;   
            }
            for(int i = 0 ; i < side - min(x1,y1) ; i++){
                for(int j = 0 ; j < x2 ; j++){
                    cout<<"B";
                }
                for(int j = 0 ; j < y3 ; j++){
                    cout<<"C";
                }
                cout<<endl;   
            }
            return 0;
        }
        if((y2 + x3) == side){
            cout<<side<<"\n";
            for(int i = 0 ; i < min(x1,y1) ; i++){
                for(int j = 0 ; j < side ; j++){
                    cout<<"A";
                }
                cout<<endl;   
            }
            for(int i = 0 ; i < side - min(x1,y1) ; i++){
                for(int j = 0 ; j < y2 ; j++){
                    cout<<"B";
                }
                for(int j = 0 ; j < x3 ; j++){
                    cout<<"C";
                }
                cout<<endl;   
            }
            return 0;
        }
        if((y2 + y3) == side){
            cout<<side<<"\n";
            for(int i = 0 ; i < min(x1,y1) ; i++){
                for(int j = 0 ; j < side ; j++){
                    cout<<"A";
                }
                cout<<endl;   
            }
            for(int i = 0 ; i < side - min(x1,y1) ; i++){
                for(int j = 0 ; j < y2 ; j++){
                    cout<<"B";
                }
                for(int j = 0 ; j < y3 ; j++){
                    cout<<"C";
                }
                cout<<endl;   
            }
            return 0;
        }
    }
    if((max(x1,y1) != side) && (max(x2,y2) == side) && (max(x3,y3) != side)){//case2.2
        if((x1 + x3) == side){
            cout<<side<<"\n";
            for(int i = 0 ; i < min(x2,y2) ; i++){
                for(int j = 0 ; j < side ; j++){
                    cout<<"B";
                }
                cout<<endl;   
            }
            for(int i = 0 ; i < side - min(x2,y2) ; i++){
                for(int j = 0 ; j < x1 ; j++){
                    cout<<"A";
                }
                for(int j = 0 ; j < x3 ; j++){
                    cout<<"C";
                }
                cout<<endl;   
            }
            return 0;
        }
        if((x1 + y3) == side){
            cout<<side<<"\n";
            for(int i = 0 ; i < min(x2,y2) ; i++){
                for(int j = 0 ; j < side ; j++){
                    cout<<"B";
                }
                cout<<endl;   
            }
            for(int i = 0 ; i < side - min(x2,y2) ; i++){
                for(int j = 0 ; j < x1 ; j++){
                    cout<<"A";
                }
                for(int j = 0 ; j < y3 ; j++){
                    cout<<"C";
                }
                cout<<endl;   
            }
            return 0;
        }
        if((y1 + x3) == side){
            cout<<side<<"\n";
            for(int i = 0 ; i < min(x2,y2) ; i++){
                for(int j = 0 ; j < side ; j++){
                    cout<<"B";
                }
                cout<<endl;   
            }
            for(int i = 0 ; i < side - min(x2,y2) ; i++){
                for(int j = 0 ; j < y1 ; j++){
                    cout<<"A";
                }
                for(int j = 0 ; j < x3 ; j++){
                    cout<<"C";
                }
                cout<<endl;   
            }
            return 0;
        }
        if((y1 + y3) == side){
            cout<<side<<"\n";
            for(int i = 0 ; i < min(x2,y2) ; i++){
                for(int j = 0 ; j < side ; j++){
                    cout<<"B";
                }
                cout<<endl;   
            }
            for(int i = 0 ; i < side - min(x2,y2) ; i++){
                for(int j = 0 ; j < y1 ; j++){
                    cout<<"A";
                }
                for(int j = 0 ; j < y3 ; j++){
                    cout<<"C";
                }
                cout<<endl;   
            }
            return 0;
        }
    }
    if((max(x1,y1) != side) && (max(x2,y2) != side) && (max(x3,y3) == side)){//case2.3
        if((x1 + x2) == side){
            cout<<side<<"\n";
            for(int i = 0 ; i < min(x3,y3) ; i++){
                for(int j = 0 ; j < side ; j++){
                    cout<<"C";
                }
                cout<<endl;   
            }
            for(int i = 0 ; i < side - min(x3,y3) ; i++){
                for(int j = 0 ; j < x1 ; j++){
                    cout<<"A";
                }
                for(int j = 0 ; j < x2 ; j++){
                    cout<<"B";
                }
                cout<<endl;   
            }
            return 0;
        }
        if((x1 + y2) == side){
            cout<<side<<"\n";
            for(int i = 0 ; i < min(x3,y3) ; i++){
                for(int j = 0 ; j < side ; j++){
                    cout<<"C";
                }
                cout<<endl;   
            }
            for(int i = 0 ; i < side - min(x3,y3) ; i++){
                for(int j = 0 ; j < x1 ; j++){
                    cout<<"A";
                }
                for(int j = 0 ; j < y2 ; j++){
                    cout<<"B";
                }
                cout<<endl;   
            }
            return 0;
        }
        if((y1 + x2) == side){
            cout<<side<<"\n";
            for(int i = 0 ; i < min(x3,y3) ; i++){
                for(int j = 0 ; j < side ; j++){
                    cout<<"C";
                }
                cout<<endl;   
            }
            for(int i = 0 ; i < side - min(x3,y3) ; i++){
                for(int j = 0 ; j < y1 ; j++){
                    cout<<"A";
                }
                for(int j = 0 ; j < x2 ; j++){
                    cout<<"B";
                }
                cout<<endl;   
            }
            return 0;
        }
        if((y1 + y2) == side){
            cout<<side<<"\n";
            for(int i = 0 ; i < min(x3,y3) ; i++){
                for(int j = 0 ; j < side ; j++){
                    cout<<"C";
                }
                cout<<endl;   
            }
            for(int i = 0 ; i < side - min(x3,y3) ; i++){
                for(int j = 0 ; j < y1 ; j++){
                    cout<<"A";
                }
                for(int j = 0 ; j < y2 ; j++){
                    cout<<"B";
                }
                cout<<endl;   
            }
            return 0;
        }
    }

    cout<<-1;
    return 0;
}