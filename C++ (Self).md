# Notes

## General
1. There is no utility in uploading/committing the '.exe' files which are created when a CPP program is executed.

## FirstCppProgram
1. "std::endl" is used to print the newline character.
2. Programs are compiled using the following syntax
   'g++ -std=c++20 program_name.cpp -o program_name.exe'
3. To see the output, we use the following command format: './program_name.exe'

## Comments
1. '//' is for single-line comments while '/* ... */' is for multi-line comments
2. Nesting the multi-line comments is not allowed.

## Errors
1. There are 3 types of errors we need to watch out for:
   (a) Run-time Errors
   (b) Compile-time Errors
   (c) Warnings

## Statements and Functions
1. A statement is a basic unit of computation in C++ program. It ends with a semi-colon.
2. Execution keeps going until there is a line which causes the program to terminate, or run another sequence of statements.
3. Functions can be used to make pre-defined templates to perform a certain task. 
   Note: When using a function, sometimes the variable storing the returned result
   needs to have it's type defined beforehand.

## Data Input and Output
1. The reason why the '<' symbols are used is to show that the output is being returned to the function called, and so act as a 'to the left' indicator.
2. The following table shows other printing functions and what they do:
   |Stream|Purpose|
   |------|-------|
   |std::cout|Printing data to the console (terminal)|
   |std::cin|Reading data from the terminal|
   |std::cerr|Printing errors to the console|
   |std::colg|Printing log messages to the console|
