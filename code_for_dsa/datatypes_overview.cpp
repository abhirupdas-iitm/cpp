#include <bits/stdc++.h>
using namespace std;

int main(){
    //int
    int x = 10;
    //long
    long y = 15;
    cin >> x;

    long long z = 150000000;
    
    //float, double
    
    float a = 5.6;
    float b = 5;
    double c = 10.25;

    //string, getline
    
    string s1;
    string s2;
    cin >> s1 >> s2;
    cout << s1 << " " << s2;
    /*
    If we want to make it such that an entered sentence gets incorporated in
    a single string, then we use the command getline as shown below
    */

    string str;
    getline(cin, str);
    cout << str;
    /* 
    One thing to note here is that if we enter another line after the first one
    then it will not be picked up by the command. It works one line at a time
    */

    //character (or char)

    char ch = 'g';
    cin >> ch;
    cout << ch;

    return 0;
}
