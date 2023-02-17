#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long a, b, c, d, cc, dd;
    cin >> a >> b >> c >> d;
    cc = c-a;
    dd = d-b;
 
    //出力が0のとき
    if(cc==0 && dd==0){
        cout << 0 << endl;
        return 0;
    }
 
    //出力が1のとき
    long long zc, zd;
    if(cc<0){
        zc = -1*cc;
    }
    else{
        zc = cc;
    }
 
    if(dd<0){
        zd = -1*dd;
    }
    else{
        zd = dd;
    }
 
    if(cc + dd == 0 || cc - dd == 0 || zc + zd <=3){
        cout << 1 << endl;
        return 0;
    }
 
    //出力が2のとき
    if((zc + zd)%2 == 0){
        cout << 2 << endl;
        return 0;
    }
    if((zc + zd)==5){
        cout << 2 << endl;
        return 0;
    }
    if(-3 <= (zd-zc) && (zd-zc) <= 3){
        cout << 2 << endl;
        return 0;
    }
 
    cout << 3 << endl;
    return 0;
}