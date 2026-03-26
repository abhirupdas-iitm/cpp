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
    else if(marks<=44){
        cout << "E";
    }
    else if(marks<=49){
        cout << "D";
    }
    else if(marks<=59){
        cout << "C";
    }
    else if(marks<=79){
        cout << "B";
    }
    else if(marks<=100){
        cout << "A";
    }
    else{
        cout << "Invalid Input";
    }

    return 0;
}
/*
This program is made to show how we can trim down conditions and also make
better use of conditional statements to increase the time efficiency. One thing
to note here would be that the order in which the statements are written matter 
a lot, so it is better to go from starting of the scale rather than the other end
of the scale. In our case, it's better to go from 0-24, 25-44, and so on, rather 
than 100-80, 79-60 and so on. 
*/
