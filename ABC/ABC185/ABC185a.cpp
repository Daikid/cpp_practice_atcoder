#include <bits/stdc++.h>
using namespace std;
 
int main(void){
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    int m = min(A, B);
    m = min(m, C);
    m = min(m, D);
    cout << m << endl;
    return 0;
}