#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string S;
    cin >> S;
    string ans = "Lost";
    if(S.at(0) == S.at(1)){
        if(S.at(0) == S.at(2)){
            ans = "Won";
        }
    }
    cout << ans << endl;
    return 0;
}