#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    if (M==0){
        for(int i=1; i<=N-1; i++){
            cout << i << " ";
        }
        cout << N << endl;
        return 0;
    }

    vector<int> a(M);
    for(int i=0; i<M; i++){
        cin >> a.at(i);
    }

    vector<int> a_bool(N,0);
    for(int i=0; i<M; i++){
        a_bool.at(a.at(i)) = 1;
    }

    /*for(int i=0; i<N; i++){
        cout << a_bool.at(i) << " ";
    }

    cout << "OK" << endl;
    */

    for(int i=1; i<=N; i++){
        int j = i;
        if(i == N){
            cout << N << endl;
            break;
        }

        while(a_bool.at(j)){
            j++;
            if(j>=N){
                break;
            }
        }

        for(int x=j; x>=i; x--){
            if(j==100 && x==i){
                cout << x << endl;
                break;
            }

            cout << x << " ";
        }

        i = j;
    }

    return 0;
}