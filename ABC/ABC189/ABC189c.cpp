#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i=0; i<N; i++){
        cin >> A.at(i);
    }
 
    int m;
    int tmp;
    int M = A.at(0);
 
    for(int l=0; l<N; l++){
        m = A.at(l);
        for(int r=l; r<N; r++){
            if(A.at(r) < m){
                m = A.at(r);
            }
            //cout << m << endl;
            tmp = m * (r-l+1);
            if(tmp > M){
                M = tmp;
            }
        }
    }
 
    cout << M << endl;
    
    return 0;
}