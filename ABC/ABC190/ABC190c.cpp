#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int N, M;
    cin >> N >> M;
    vector<int> A(M), B(M);
    for(int i=0; i<M; i++){
        cin >> A.at(i) >> B.at(i);
    }
 
    int K;
    cin >> K;
    vector<int> C(K), D(K);
    for(int i=0; i<K; i++){
        cin >> C.at(i) >> D.at(i);
    }
 
    int ans = 0;
 
    for(int bit=0; bit < (1<<K); bit++){
        unordered_set<int> V;
        int tmp = 0;
 
        for(int k=0; k<K; k++){
            if(bit & (1 << k)){
                V.insert(C.at(k));
            }
            else{
                V.insert(D.at(k));
            }
        }
        for(int i=0; i<M; i++){
            if(V.count(A.at(i))){
                if(V.count(B.at(i))){
                    tmp++;
                }
            }
        }
        if(tmp > ans){
            ans = tmp;
        }
    }
 
    cout << ans << endl;
    
    return 0;
}