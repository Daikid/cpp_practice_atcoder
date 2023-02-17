#include<iostream>
#include<string>

using namespace std;

int main(){
    string s1;
    cin >> s1;
    string s2 ="";
    for(int i=0; i<s1.length(); i++){
        if(s1.at(i)=='0') s2 += "1";
        else s2 += "0";
    }

    cout << s2 << endl;
    return 0;
}