#include <bits/stdc++.h>
using namespace std;
/*

*/
int main(){
    int j;
    cout << "Enter the number of elements you want to enter in the array" << endl;
    cin >> j;
    int arr[j];
    cout << "Please start entering your numbers" << endl;
    for(int k=0;k<j;k++){
        cin >> arr[k];
    }
    int i;
    cout << "Enter the index for which you want the data stored" << endl;
    cin >> i;
    cout << endl;
    if(i>=0 and i<j){
        cout << arr[i];
    }
    return 0;
}
