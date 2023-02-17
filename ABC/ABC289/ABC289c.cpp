#include<iostream>
#include<vector>

using namespace std;

int solve(int m, vector<int> S, vector<vector<int>> s){
    int ans;
    vector<int> S1 = S;
    vector<int> S2(S.size());
    for(int i=0; i<S.size(); i++){
        S2.at(i) = S1.at(i) + s.at(m).at(i);
    }

    if(m==0){
        int S1_flag = 1;
        int S2_flag = 1;
        for(int i=0; i<S.size(); i++){
            S1_flag *= S1.at(i);
            S2_flag *= S2.at(i);
        }
        if(S1_flag) S1_flag = 1;
        if(S2_flag) S2_flag = 1;
        ans = S1_flag + S2_flag;
        
        return ans;
    }
    
    return solve(m-1, S1, s) + solve(m-1, S2, s);
}

int main(){
    int N, M;
    cin >> N >> M;
    vector<int> C(N);
    vector<vector<int>> a(M,vector<int>(N,0));

    for (int i=0; i<M; i++){
        int C;
        cin >> C;
        int a_tmp;
        for (int j=0; j<C; j++){
            cin >> a_tmp;
            a.at(i).at(a_tmp-1) = 1;
        }
    }

    vector <int> zeros(N,0);

    int ans = solve(M-1, zeros, a);

    cout << ans << endl;

    return 0;

}