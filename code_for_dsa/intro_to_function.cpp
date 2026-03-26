#include <bits/stdc++.h>
using namespace std;
/*
Functions are a set of code which performs something for us. These
are used to modularize code. They also increase the readability of
the code and, same segments can be used repetitively as well. 
void -> which does not return anything
return
parameterized
non-parameterized
*/

void printName(string name){
    cout << "hey " << name << "! how are ya?" << endl;
}
int main(){
    string name;
    cout << "Enter your name pls!" << endl;
    cin >> name;
    printName(name);
    return 0;
}
