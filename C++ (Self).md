# Notes

## General
1. There is no utility in uploading/committing the '.exe' files which are created when a CPP program is executed.

## FirstCppProgram
1. "std::endl" prints a newline and flushes the output buffer. We should prefer '\n' for performance unless flushing is needed. This distinction matters later.
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
1. The `<<` symbol inserts data into an output stream (like std::cout).
2. The following table shows other printing functions and what they do:
   |Stream|Purpose|
   |------|-------|
   |std::cout|Printing data to the console (terminal)|
   |std::cin|Reading data from the terminal|
   |std::cerr|Printing errors to the console|
   |std::clog|Printing log messages to the console|
3. `int`,`char`,`float`,`double`,`bool` (fundamental type but behaves differently than numeric types) and `void` (type with no value, mainly for functions) are built-in objects, while `std::string`, `std::vector`,`std::map`,`std::cin` and `std::cout` belong to a library, and not to the global namespace. They: 
   (a) require headers (`<string>`, `<vector>`,`<iostream>`)
   (b) live inside `namespace std`
   (c) are not part of the core language.

## Execution Model
1. One key thing to note is that declaring `int c = 0;` and `int c;` are different in the sense that in the first case, there are no values that are assigned whereas in the second case, 0 is explicitly assigned.

## Core Language vs Standard Library vs STL

