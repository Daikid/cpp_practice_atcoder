#include<iostream>
#include<vector>
using namespace std;

/*int main(){
    int N;
    cin >> N;
    vector <long long> A(N);
    for(int i=0; i<N; i++){
        cin >> A.at(i);
    }
    long long ans = 0;
    long long tmp;
    for(int i=1; i<N; i++){
        for(int j=0; j<i; j++){
            tmp = abs(A.at(j)-A.at(i));
            ans += tmp * tmp;
        }
    }

    cout << ans << endl;
    return 0;
}*/

int main(){
    int N;
    cin >> N;
    vector <long long> A(N), A_sum(N), A_double_sum(N);
    cin >> A.at(0);
    A_sum.at(0) = A.at(0);
    A_double_sum.at(0) = A.at(0) * A.at(0);
    for(int k=1; k<N; k++){
        cin >> A.at(k);
        A_sum.at(k) = A_sum.at(k-1) + A.at(k);
        A_double_sum.at(k) = A_double_sum.at(k-1) + A.at(k)*A.at(k);
    }

    long long ans=0;
    long long a, b, c;
    for(int i=1; i<N; i++){
        a = i * A.at(i) * A.at(i);
        b = 2 * A.at(i) * A_sum.at(i-1);
        c = A_double_sum.at(i-1);
        ans += a - b + c;
    }

    cout << ans << endl;
    return 0;
}