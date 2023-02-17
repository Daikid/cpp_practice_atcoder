#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int M, N;
    string ans = "Yes";

    cin >> N >> M;

    vector<int> A(N);
    vector<int> B(M);

    for(int i=0; i<N; i++){
        cin >> A.at(i);
    }

    for(int i=0; i<M; i++){
        cin >> B.at(i);
    }

    int A_size = N;

    for(int i=0; i<M; i++){

        if(ans == "No"){
            break;
        }

        for(int j=0; j<A_size; j++){

            if(B.at(i) == A.at(j)){

                A.erase(A.begin() + j);
                A_size -= 1;
                break;
            }

            else{
                if(j == A_size-1){
                    ans = "No";
                }
            }
        }
    }
    
    cout << ans << endl;
    return 0;
}