#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string S;
    cin >> S;
    long long m, b, q;
    m = 0;
    b = 0;
    q = 10;
    for(int i=0; i<=9; i++){
        if(S.at(i) == 'o') m++;
        if(S.at(i) == 'x') b++;
    }
    q -= m;
    q -= b;

    long long ans = 0;
    if(m==4){
        ans = 24;
    }
    if(m==3){
        ans = 36 + 24*q;
    }
    if(m==2){
        ans = 14 + 36*q + 12*q*(q-1);
    }
    if(m==1){
        ans = 1 + 14*q + 4*q*(q-1)*(q-2) + 18*q*(q-1);
    }
    if(m==0){
        ans = q + 7*q*(q-1) + 6*q*(q-1)*(q-2) + q*(q-1)*(q-2)*(q-3);
    }

    cout << ans << endl;
    return 0;
}