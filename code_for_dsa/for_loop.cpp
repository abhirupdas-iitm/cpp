#include <bits/stdc++.h>
using namespace std;

int main(){
    int i;
    cout << "Enter a word you would like to get repeated" << endl;
    string s;
    cin >> s;
    cout << "Enter how many times you would like to get it repeated" << endl;
    int j;
    cin >> j;
    for(i=1;i<=j;i++){
        cout << s << endl;
    }
    return 0;
}
