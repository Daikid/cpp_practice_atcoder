#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long N;
    cin >> N;
    vector<long long> M;
    for(long long i=1; i*i<2*N; i++){
        if((2*N) % i == 0){
            M.push_back(i);
            M.push_back((2*N)/i);
        }
    }
 
    int ans = 0;
    int s = M.size();
 
    for(int i=0; i<s; i++){
        long long tmp = 1 - M.at(i) + (2*N / M.at(i));
        if(tmp % 2 == 0){
            ans += 1;
        }
    }
 
    cout << ans << endl;
 
    return 0;
}