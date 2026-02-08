#include <iostream>
#include <cstring>
#include <string>

// Primary function template — MUST be defined
template <typename T>
T maximum(T a, T b)
{
    return (a > b) ? a : b;
}

// Template specialization for const char*
template <>
const char* maximum<const char*>(const char* a, const char* b)
{
    return (std::strcmp(a, b) > 0) ? a : b;
}

int main()
{
    int a{10};
    int b{23};

    double c{34.7};
    double d{23.4};

    std::string e{"hello"};
    std::string f{"world"};

    std::cout << "max int    : " << maximum(a, b) << std::endl;
    std::cout << "max double : " << maximum(c, d) << std::endl;
    std::cout << "max string : " << maximum(e, f) << std::endl;

    const char* g{"wild"};
    const char* h{"animal"};

    std::cout << "max cstr   : " << maximum(g, h) << std::endl;

    return 0;
}
