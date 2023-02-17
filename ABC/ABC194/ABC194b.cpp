#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    int N;
    cin >> N;
    vector<long long> A(N), B(N);
    long long A_min, A_sub_min, B_min, B_sub_min;
    long long sum_min;
    A_min = 1e9;
    A_sub_min = 1e9;
    B_min = 1e9;
    B_sub_min = 1e9;
    sum_min = 1e10;
    int min_A_index, min_B_index;

    for(int i=0; i<N; i++){
        cin >> A.at(i) >> B.at(i);
        if(A.at(i) < A_sub_min){
            A_sub_min = A.at(i);
        }
        if(A.at(i) < A_min) {
            A_sub_min = A_min;
            A_min = A.at(i);
            min_A_index = i;
        }
        if(B.at(i) < B_sub_min){
            B_sub_min = B.at(i);
        }
        if(B.at(i) < B_min) {
            B_sub_min = B_min;
            B_min = B.at(i);
            min_B_index = i;
        }

        if(sum_min > A.at(i) + B.at(i)) sum_min = A.at(i) + B.at(i);
    }

    long long ans = max(A_min, B_min);

    if(min_A_index == min_B_index){
        long long X, Y;
        X = max(A_min, B_sub_min);
        Y = max(B_min, A_sub_min);
        ans = min(X, Y);
        ans = min(sum_min, ans);
    }
    
    cout << ans << endl;
    return 0;
}