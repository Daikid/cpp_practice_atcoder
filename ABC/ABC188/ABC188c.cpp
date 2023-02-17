#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int N;
    cin >> N;
    long long n = pow(2,N) + 0.01;
    long long m = n/2;
    vector<int> A(m);
    vector<int> B(m);
    for (int i=0; i<m; i++){
        cin >> A.at(i);
    }
    for (int i=0; i<m; i++){
        cin >> B.at(i);
    }
    
    int m1,m2;
    m1 = A.at(0);
    m2 = B.at(0);
    int j1, j2;
    j1 = 0;
    j2 = 0;
    for(int i=1; i<m; i++){
        if(A.at(i) > m1){
            m1 = A.at(i);
            j1 = i;
        }
        if(B.at(i) > m2){
            m2 = B.at(i);
            j2 = i;
        }
    }
 
    if(m1 > m2){
    j2 += m;
    cout << j2+1 << endl;
    }
    else
    {
        cout << j1+1 << endl;
    }
 
 
    return 0;
}