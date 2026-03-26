#include <bits/stdc++.h>
using namespace std;

int maxx(int num1, int num2){
    if(num1 > num2){
        return num1;
    }
    return num2;
}
int minn(int num1, int num2){
    if(num1 < num2){
        return num1;
    }
    return num2;
}
int main(){
    int num1, num2;
    cout << "Enter number 1" << endl;
    cin >> num1;
    cout << "Enter number 2" << endl;
    cin >> num2;
    int maximum = maxx(num1, num2);
    int minimum = minn(num1, num2);
    cout << "Maximum among both: " << maximum << endl;
    cout << "Minimum among both: " << minimum << endl;
    return 0;
}
