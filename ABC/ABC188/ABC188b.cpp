#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> B(N);
    for(int i=0; i<N; i++){
        cin >> A.at(i);
    }
    for(int i=0; i<N; i++){
        cin >> B.at(i);
    }
    long long s = 0;
    int tmp;
    for (int i=0; i<N; i++){
        tmp = A.at(i) * B.at(i);
        s += tmp;
    }
    if(s){
        cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;
    }
    
    return 0;
}