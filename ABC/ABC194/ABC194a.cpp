#include <iostream>
using namespace std;
 
int main(){
    int A, B;
    cin >> A >> B;
    int C = A+B;
    int ans = 4;
    if(C>=15 && B>=8){
        ans = 1;
    }
    else{
        if(C>=10 && B>=3){
            ans = 2;
        }
        else{
            if(C>=3){
                ans = 3;
            }
        }
    }

    cout << ans << endl;
    return 0;
}