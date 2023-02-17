#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int N, S, D;
    cin >> N >> S >> D;
    int X, Y;
    string ans = "No";
 
    for(int i=0; i<N; i++){
        cin >> X >> Y;
        if(X<S){
            if(Y>D){
                ans = "Yes";
                break;
            }
        }
    }
 
    cout << ans << endl;
    
    return 0;
}