#ifndef IO_FUNCTION_PARAMETERS_H
#define IO_FUNCTION_PARAMETERS_H

#include <string>

void max_str(const std::string& input1,
             const std::string& input2,
             std::string& output);

void max_int(int input1, int input2, int& output);

void max_double(double input1, double input2, double& output);

#endif
