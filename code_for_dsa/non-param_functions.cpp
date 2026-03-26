#include <bits/stdc++.h>
using namespace std;
int sum(int num1, int num2){
    int num3 = num1 + num2;
    cout << "Sum of two numbers: ";
    return num3;
}

int main(){
    int num1, num2;
    cout << "Enter first number" << endl;
    cin >> num1;
    cout << "Enter second number" << endl;
    cin >> num2;
    int res = sum(num1,num2);
    cout << res;
    return 0;
}
