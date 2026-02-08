#include <iostream>
#include <cstring>
#include <string>

// Primary function template — MUST be defined
template <typename T>
T maximum(T a, T b)
{
    return (a > b) ? a : b;
}

template <>
const char * maximum <const char*> (const char * a, const char * b)
{
    //std::strcmp doc : https://cppreference.com/w/c/string/byte/strcmp
    return (std::strcmp(a,b) > 0) ? a : b;
}

int main()
{
    std::cout << maximum(3, 7) << std::endl;
    std::cout << maximum(2.5, 1.4) << std::endl;
    std::cout << maximum(std::string{"apple"}, std::string{"banana"}) << std::endl;
    std::cout << maximum("wild", "animal") << std::endl;
}
