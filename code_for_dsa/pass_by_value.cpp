#include <bits/stdc++.h>
using namespace std;
//pass by value
void doSomething(int num){
    cout << num << endl;
    cout << "Increasing the number by 5" << endl;
    num+=5;
    cout << num << endl;
    cout << "Increasing the number by 5" << endl;
    num+=5;
    cout << num << endl;
    cout << "Increasing the number by 5" << endl;
    num+=5;
    cout << num << endl;
}
int main(){
    int num = 10;
    doSomething(num);
    cout << "After performing operations: ";
    cout << num << endl;
    return 0;
}
