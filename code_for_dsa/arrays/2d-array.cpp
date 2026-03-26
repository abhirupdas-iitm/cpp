#include <bits/stdc++.h>
using namespace std;

int main(){
    //2D array
    int arr[3][5];

    arr[1][3] = 73;
    cout << "Index that was initialized properly shows the value stored" << endl;
    cout << arr[1][3];
    cout << endl;
    cout << "Indices that weren't have garbage value as shown below" << endl;
    cout << arr[1][2];
    
    return 0;
}
