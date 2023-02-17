#include <bits/stdc++.h>
using namespace std;
 
int main(void){
    int N, M, T;
    cin >> N >> M >> T;
    vector<int> A(M+1);
    A.at(M) = T;
    vector<int> B(M);
    for(int i=0; i<M; i++){
        cin >> A.at(i) >> B.at(i);
    }
 
    string ans = "Yes";
 
    int move = A.at(0);
    int E = N-move;
    if(E<=0){
        ans = "No";
    }
 
    else{
        for(int i=0; i<M; i++){
            int stay = B.at(i) - A.at(i);
 
            if(E + stay >= N){
                E = N;
            }
            else{
                E += stay;
            }
 
            move = A.at(i+1) - B.at(i);
            E -= move;
 
            if(E <= 0){
                ans = "No";
                break;
            }
 
        }
    }
 
    
 
    cout << ans << endl;
    return 0;
}