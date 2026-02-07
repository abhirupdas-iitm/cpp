#include <iostream>
#include <algorithm>
#include <cstring>
//This is return by reference
std::string add_strings(std::string str1, std::string str2){
    std::string result = str1 + str2;
    std::cout << "In : &result(std::string) : " << &result << std::endl;
    return result;
}

int main(int argc, char **argv)
{
    std::string str_result = add_strings(std::string("Hello"),std::string("World!"));
    std::cout << "Out : &result(std::string) : " << &str_result << std::endl;
    std::cout << "str_result : " << str_result << std::endl;

    return 0;

}
