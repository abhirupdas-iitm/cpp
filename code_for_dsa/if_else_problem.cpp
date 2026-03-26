#include <bits/stdc++.h>
using namespace std;
/*
A school has following rules for grading system:
a. Below 25 - F
b. 25 to 44 - E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - B
f. 80 to 100 - A
User will enter marks and the corresponding grade will be printed
*/
int main(){
    int marks;
    cin >> marks;
    if(marks < 25){
        cout << "F";
    }
    if(marks>=25 and marks<=44){
        cout << "E";
    }
    if(marks>=45 and marks<=49){
        cout << "D";
    }
    if(marks>=50 and marks<=59){
        cout << "C";
    }
    if(marks>=60 and marks<=79){
        cout << "B";
    }
    if(marks>=80 and marks<=100){
        cout << "A";
    }
    else
        cout << "Invalid Input";
    }
    
    return 0;
}
