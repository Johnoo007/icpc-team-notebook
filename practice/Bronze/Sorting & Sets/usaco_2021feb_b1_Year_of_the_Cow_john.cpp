#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pipii = pair<int, pii>; 
using tiii = tuple<int, int, int>; 

#define all(x) (x).begin(), (x).end()
#define fastio() ios::sync_with_stdio(0); cin.tie(0);

unordered_map<string,int> year;
unordered_map<string,string> cowZodiac;
unordered_map<string,int> cowPos;

void setUpYear(){
    year["Ox"] = 1;
    year["Tiger"] = 2;
    year["Rabbit"] = 3;
    year["Dragon"] = 4;
    year["Snake"] = 5;
    year["Horse"] = 6;
    year["Goat"] = 7;
    year["Monkey"] = 8;
    year["Rooster"] = 9;
    year["Dog"] = 10;
    year["Pig"] = 11;
    year["Rat"] = 12;

    cowPos["Bessie"] = 0;
    cowZodiac["Bessie"] = "Ox";
}

int main() {
    fastio();
    setUpYear();
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        string words[8];
        
        for (int j = 0; j < 8; j++) {
            cin >> words[j];
        }
        
        string name1 = words[0];      // Mildred
        string relation = words[3];   // previous or next
        string zodiac = words[4];     // Dragon
        string name2 = words[7];      // Bessie

        cowZodiac[name1] = zodiac;

        if(relation == "previous"){   // previous
            if(year[cowZodiac[name2]] > year[zodiac]){ // same year
                cowPos[name1] = cowPos[name2] - year[cowZodiac[name2]] + year[zodiac]; 
            }else{ // previous year
                cowPos[name1] = cowPos[name2] - year[cowZodiac[name2]] + year[zodiac] - 12;
            }
        }else{                        // next
            if(year[zodiac] > year[cowZodiac[name2]]){ // same year
                cowPos[name1] = cowPos[name2] + year[zodiac] - year[cowZodiac[name2]]; 
            }else{ // next year
                cowPos[name1] = cowPos[name2] + year[zodiac] - year[cowZodiac[name2]] + 12;
            }
        }
    }

    cout<< abs(cowPos["Elsie"]);
    
    return 0;
}

// 4
// Mildred born in previous Dragon year from Bessie
// Gretta born in previous Monkey year from Mildred
// Elsie born in next Ox year from Gretta
// Paulina born in next Dog year from Bessie
