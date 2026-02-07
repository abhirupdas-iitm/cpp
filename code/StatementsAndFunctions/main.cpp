#include <iostream>
#include "IO_function_parameters.h"

int main()
{
    std::string s1{"apple"};
    std::string s2{"banana"};
    std::string s_out;

    max_str(s1, s2, s_out);
    std::cout << "max string : " << s_out << std::endl;

    int i_out{};
    max_int(10, 25, i_out);
    std::cout << "max int : " << i_out << std::endl;

    double d_out{};
    max_double(3.14, 2.71, d_out);
    std::cout << "max double : " << d_out << std::endl;

    return 0;
}
