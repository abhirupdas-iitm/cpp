#include <bits/stdc++.h>
using namespace std;
/*
In this one, we will be given a day number and we have to print the
corresponding day. For example, entering 1 should print Monday, and for
2 it should print Tuesday and so on till 7, where it prints Sunday.
*/
int main(){
    int day;
    cin >> day;

    switch(day){
        case 1:
            cout << "Monday" << endl;
            break; //If we don't add break, a fall-through error happens
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid number";
            break;
    }
cout << "Check";
    return 0;
}
