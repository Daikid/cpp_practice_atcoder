#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> T(N);
    vector<string> S(N);
    for(int i=0; i<N; i++){
        cin >> S.at(i) >> T.at(i);
    }
    int n1, n2;
    n1 = 0;
    n2 = 1;
    if(T.at(0) < T.at(1)){
        n1 = 1;
        n2 = 0;
    }
    if(N>2){
        for(int i=2; i<N; i++){
                int t = T.at(i);
                if(t > T.at(n2)){
                    if(t > T.at(n1)){
                        n2 = n1;
                        n1 = i;
                    }
                    else n2 = i;
                }
            }
    }
    

    cout << S.at(n2) << endl;
    return 0;

}