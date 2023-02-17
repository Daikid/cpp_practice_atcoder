#include <iostream>
#include <string>
using namespace std;

int main(){
    int A, B, C;
    string ans = "No";
    cin >> A >> B >> C;
    if(A > B){//A<Bにする
        int tmp = A;
        A = B;
        B = tmp;
    }
    if(B > C){//A<Bのもとに、B＜Cにする
        int tmp = B;
        B = C;
        C = tmp;
    }
    if(A > B){//A<Bにする
        int tmp = A;
        A = B;
        B = tmp;
    }
    if(C-B == B-A){
        ans = "Yes";
    }
    cout << ans << endl;
    return 0;

}