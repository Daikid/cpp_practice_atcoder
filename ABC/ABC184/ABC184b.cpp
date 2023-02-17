#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int N, X;
    string results;
    cin >> N >> X >> results;
    for(int i=0; i<N; i++){
        //char ch = results[i];
        if(results[i] == 'o'){
            X++;
            continue;
        }
        if(results[i] == 'x'){
            if(X){
                X--;
            }
            continue;
        }
    }
    cout << X << endl;
}