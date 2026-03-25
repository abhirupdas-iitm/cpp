#include<bits/stdc++.h>
using namespace std;
/*
Writing a program that takes an age as an input
and prints if the user is adult or not
>=18, yes
<18, no
*/
int main(){
    int age;
    cin >> age;
    if(age>=18){
        cout << "You are an adult!";
    }
    else{
        cout << "You are not an adult!";
    }
    return 0;
}
