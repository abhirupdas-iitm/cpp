#include <iostream>
#include <iomanip>
#include <cstring>

int main(){
    /*
    std::strncmp : int strncmp (const char *lhs, const char *rhs, std::size_t count);
    Compares n characters in the strings
    Returns: Negative value if lhs appears before rhs in lexicographical order,
    Zero,if lhs and rhs compare equal, or if count is zero. 
    Positive value if lhs appears after rhs in lexicographical order.
    */

    const char * string_data1 = "Alabama";
    const char * string_data2 = "Alabamb";

    //Print out the comparison
    size_t n{3};
    std::cout << std::endl;
    std::cout << "std::strncmp : " << std::endl;
    std::cout << "std::strncmp (" << string_data1 << "," << string_data2 << "," << n << ") : " << std::strncmp(string_data1,string_data2,n) << std::endl;

    string_data1 = "aaaia";
    string_data2 = "aaance";
    std::cout << "std::strncmp (" << string_data1 << "," << string_data2 << "," << n << ") : " << std::strncmp(string_data1,string_data2,n) << std::endl;

    return 0;

}
