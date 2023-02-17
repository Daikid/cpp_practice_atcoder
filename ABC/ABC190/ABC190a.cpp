#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int A, B, C;
    cin >> A >> B >> C;
    string ans = "Takahashi";
    if(C){
        if(B>A){
            ans = "Aoki";
        }
    }
    else{
        if(B>=A){
            ans = "Aoki";
        }
    }
    
    cout << ans << endl;
    
    return 0;
}