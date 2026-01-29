#include <iostream>

int main(int argc, char **argv){
    {
        int local_scope_var {33};
        std::cout << "local_scope_var is accessible only under this block" << std::endl;
        std::cout << "value of local_scope_var is : " << local_scope_var << std::endl;
    }
    std::cout << "Outside the block, value of local_scope_var is unknown as it is inaccessible\n" << std::endl;
    std::cout << "If we still try to print it, the following error will be shown:\n" << std::endl;
    std::cout << "lifetime_through_scope.cpp:9:73: error: 'local_scope_var' was not declared in this scope" << std::endl;
    return 0;

}
