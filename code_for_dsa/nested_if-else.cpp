#include <bits/stdc++.h>
using namespace std;
/*
In this one, we will take the age from the user and then the program
will decide accordingly based on the following conditions
1. If age<18,
    print -> "not eligible for job"
2. If age>=18 and age<=54,
    print -> "eligible for job"
3. If age>=55 and age<=57,
    print -> "eligible for job, but retirement approaching"
4. If age>57
    print -> "retirement time"
*/
int main(){
    int age;
    cin >> age;
    if(age<18){
        cout << "not eligible fo job";
    }
    else if(age<=54){ //Since if the above condition is satisfied, it will exit
        cout << "eligible for job";
    }
    else if(age<=57){
        cout << "eligible for job";
        if(age>=55){
            cout << ", but retirement approaching";
        }
    }
    else{
        cout << "retirement time";
    }
    
    return 0;
}
