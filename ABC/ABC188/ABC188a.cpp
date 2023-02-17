#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int X, Y;
    cin >> X >> Y;
    int d = X - Y;
    d = abs(d);
    string ans = "No";
    if(d<=2){
        ans = "Yes";
    }
 
    cout << ans << endl;
    return 0;
}