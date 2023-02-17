#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int ans = -1;
    int N, X;
    cin >> N >> X;
    vector<int> V(N);
    vector<int> P(N);
    vector<long long> now(N+1,0.0);
    for(int i=0; i<N; i++){
        cin >> V.at(i) >> P.at(i);
        now.at(i+1) = now.at(i) + (V.at(i) * P.at(i));
    }
    
    X *= 100;
    for(int i=1; i<=N; i++){
        if(now.at(i) > X){
            ans = i;
            break;
        }
    }
 
    cout << ans << endl;
    
    return 0;
}