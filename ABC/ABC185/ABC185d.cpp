#include <bits/stdc++.h>
using namespace std;
 
int main(void){
    int N, M;
    cin >> N >> M;
    int ans;
 
    if(M==0){
        ans = 1;
    }
 
    else{
        vector<int> A(M);
 
        for(int i=0; i<M; i++){
            cin >> A.at(i);
        }
        sort(A.begin(), A.end());
        int k = 1e9;
        if(N-A.at(M-1)-1 > 0){
            k = min(N-A.at(M-1)-1, k);
        }
        if(A.at(0)-1 > 0){
            k = min(A.at(0)-1, k);
        }
 
        for(int i=0; i<M-1; i++){
            int tmp = A.at(i+1) - A.at(i) -1;
            if(tmp>0){
                k = min(k, tmp);
            }
        }
 
        //cout << k << endl;
 
        ans = 0;
 
        if(k<N){
            ans += (A.at(0)-1+k-1) / k;
            for(int i=0; i<M-1; i++){
                ans += (A.at(i+1) - A.at(i) -1 + k - 1) / k;
            }
            ans += (N - A.at(M-1) + k - 1) / k;
        }
    }
 
    cout << ans << endl;
 
    return 0;
}