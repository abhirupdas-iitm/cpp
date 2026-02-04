#include <iostream>
#include <iomanip>
#include <cstring>

int main(){
    /*
    std::strcmp - signature : int strcmp (const char *lhs, const char *rhs);
    Returns negative value if lhs appears before rhs in lexicographical order,
    Zero, if lhs and rhs yield 'equal' when compared to and positive value if lhs appears after rhs in lexicographical order.
    */

    std::cout << std::endl;
    std::cout << "std::strcmp : " << std::endl;
    const char * string_data1 {"Alabama"};
    const char * string_data2 {"Blabama"};

    //Printing out the comparison
    std::cout << "std::strcmp (" << string_data1 << "," << string_data2 << ") : " << std::strcmp(string_data1, string_data2) << std::endl;

    string_data1 = "Alabama";
    string_data2 = "Alabamb";

    //Printing out the comparison
    std::cout << "std::strcmp (" << string_data1 << "," << string_data2 << ") : " << std::strcmp(string_data1, string_data2) << std::endl;

    string_data1 = "Alacama";
    string_data2 = "Alabama";

    return 0;

}
