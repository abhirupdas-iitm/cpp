#include "IO_function_parameters.h"

void max_str(const std::string& input1, const std::string& input2, std::string& output)
{
    output = (input1 > input2) ? input1 : input2;
}

void max_int(int input1, int input2, int& output)
{
    output = (input1 > input2) ? input1 : input2;
}

void max_double(double input1, double input2, double& output)
{
    output = (input1 > input2) ? input1 : input2;
}
