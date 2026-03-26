#include <bits/stdc++.h>
using namespace std;

int main(){
    int i;
    cout << "Enter a number you would like to get the sum of digits for" << endl;
    cin >> i;
    int sum = 0;
    int r = 0;
    while(i>0){
        r = i%10;
        sum = sum + r;
        i = i/10;
    }
    cout << "Sum of digits is: " << sum;
    return 0;
}
