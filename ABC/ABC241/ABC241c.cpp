#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string ans = "No";
    int N;
    cin >> N;
    string S_i;
    vector<vector<int>>A(N+5, vector<int>(N+5,0));
    for(int i=0; i<N; i++){
        cin >> S_i;
        for(int j=0; j<N; j++){
            if(S_i.at(j) == '#'){
                A.at(i).at(j) = 1;
            }
        }
    }

    int yoko, tate, naname1, naname2;

    for(int i=0; i<N; i++){

        if(ans == "Yes"){
            break;
        }

        for(int j=0; j<N; j++){
            yoko = 0;
            tate = 0;
            naname1 = 0;
            naname2 = 0;

            for(int k=0; k<6; k++){
                yoko += A.at(i).at(j+k);
                tate += A.at(i+k).at(j);
            }

            if(yoko >= 4 || tate>=4){
                ans = "Yes";
            }

            if(i<=N-6 && j<= N-6){
                for(int k=0; k<6; k++){
                    naname1 += A.at(i+k).at(j+k);
                }
                if(naname1>=4){
                    ans = "Yes";
                }
            }

            if(j>=5 && i<=N-6){
                for(int k=0; k<6; k++){
                    naname2 += A.at(i+k).at(j-k);
                }
                if(naname2>=4){
                    ans = "Yes";
                }
            }

            if(ans == "Yes"){
                break;
            }
        }
    }
    
    cout << ans << endl;
    return 0;
}