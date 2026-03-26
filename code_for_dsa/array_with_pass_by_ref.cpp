#include <bits/stdc++.h>
using namespace std;

//Arrays always use pass by reference, not pass by value
void doSomething(int arr[], int n){
    for(int i=0;i<n;i++){
        arr[i]+=(i+1)*100;
    }
}
int main(){
    int n;
    cout << "Choose the size of the array" << endl;
    cin >> n;
    int arr[n]; 
    cout << "Enter the values" << endl;
    for(int i=0;i<n;i+=1){
        cin >> arr[i];
    }
    cout << endl;
    cout << "Values after change are as follows:" << endl;
    doSomething(arr,n);
    for(int i=0;i<n;i+=1){
        cout << arr[i] << endl;
    }
    return 0;
}
