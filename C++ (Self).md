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
1. One key thing to note is that declaring `int c = 0;` and `int c;` are different in the sense that in the first case, there are no values that are assigned whereas in the second case, 0 is explicitly assigned. In the second case, the default value will not be 0, it can be anything and in this context, it is called as "garbage value".

## Core Language vs Standard Library vs STL
1. The three can be understood by the following diagram:
C++
├── Core Features   ← language rules & syntax
└── Standard Library
    └── STL         ← containers + algorithms + iterators
2. A short note is written for each of the data types:

#### int
Stores whole numbers (positive, negative, zero).
Typically 4 bytes.
Used for counting, indexing, discrete values.
`int x = 42;`

#### double
Stores double-precision floating-point numbers.
More accurate than float.
Typically 8 bytes.
Preferred for most real-number calculations.
`double pi = 3.1415926535;`

#### float
Stores single-precision floating-point numbers.
Less precision than double.
Typically 4 bytes.
Used when memory or performance is critical.
`float temp = 36.5f;`

#### char
Stores a single character.
Actually stores a small integer (ASCII/Unicode code).
Typically 1 byte.
`char c = 'A';`

#### bool
Stores true or false.
Used in conditions and logic.
Internally represented as 0 or 1.
`bool isReady = true;`

#### void
Represents “no type” or “no value”.
Used for:
Functions that return nothing
Generic pointers (void*)
`void print() { }`

#### auto
Tells the compiler to deduce the type automatically.
Type is determined at compile time.
Improves readability and reduces verbosity.
```
auto x = 10;      // int
auto y = 3.14;    // double
```
#### ... (ellipsis)
Used for variadic functions (functions with variable arguments).
Common in C-style APIs, rare in modern C++.
`void func(int n, ...);`

### Number Systems
(a) Binary (Base-2)
Digits used: 0, 1
Base: 2
What it is:
The native language of computers. Every value in C++ is ultimately stored in binary.
Why it matters in C++:
Memory, bits, and hardware operate in binary
Bitwise operations (&, |, ^, <<, >>) work directly on binary representation
Example:
`int x = 5;   // binary: 00000101`

Key use cases:
Bits, flags, low-level programming, performance-critical code.

(b) Octal (Base-8)
Digits used: 0–7
Base: 8
What it is:
A compact representation of binary, where each octal digit represents 3 bits.
How C++ recognizes it:
Numbers starting with 0 are treated as octal (⚠ legacy behavior)
`int x = 010;   // octal → decimal 8`

Why it exists:
Historically used in Unix permissions (chmod 755)
Easier to read than raw binary
Key note:
`!!`Often avoided in modern C++ due to confusion.

(c) Hexadecimal (Base-16)
Digits used: 0–9, A–F
Base: 16
What it is:
The most programmer-friendly binary representation.
Each hex digit represents 4 bits.
How C++ recognizes it:
`int x = 0x1A;   // hexadecimal → decimal 26`

Why it’s heavily used:
Memory addresses
Color codes (0xFF00FF)
Bit masks
Debugging and low-level work
Key advantage:
Very readable while mapping cleanly to binary.

4. As the range of our data grows, so will the number of digits we would need to represent the data in memory.
5. Hexadecimal Systems make it easier for us to handle streams of data with 1's and 0's.
6. Octal has the same goal as Hexadecimal, but it is no longer used in modern times.
7. Using unsafe type conversions such as `int_narrowing_conversion_assignment = 2.9;` is not advised because this results in loss of data.
8. There are three types of initialization:
   (a) Braced Initialization
   (b) Functional Initialization
   (c) Assignment Initialization
   |Type|Syntax|Narrowing|Safety|
   |----|------|---------|------|
   |Braced|int x{10};|Prevented|High|
   |Functional|int x(10);|Allowed|Medium|
   |Assignment|int x = 10;|Allowed|Medium|
   
10. The `sizeof()` command is used to get the size of different objects, variables, functions and others.
11. Variable Naming Rules:

   (a) Must start with a letter or underscore
    ```
    int age;      // okay
    int _count;   // okay
    int 2num;     // not okay
    ```
   (b) Can contain only letters, digits, and underscores
    ```
    int total_sum;   // okay
    int total-sum;   // not okay
    ```
   (c) Cannot be a C++ keyword
   ```
   int int;     // not okay
   int return;  // not okay
   ```
   (d) Case-sensitive
   ```
   int value;
   int Value;   // different variables
   ```
   (e) No spaces allowed
   ```
    int total marks;  // not okay
   ```
   (f) Length is unlimited (practically)
   ```
   But meaningful names are preferred
   ```
12. Signed vs Unsigned in C++
   Signed integers store negative, zero, and positive values
   `→ default for int, short, long`
   Unsigned integers store only non-negative values
   `→ larger positive range using the same bits`

Key differences:
   (a) Same bits, different interpretation
   (b) Signed overflow → undefined behavior
   (c) Unsigned overflow → wraps around (well-defined)

Biggest pitfall:
   (a) Mixing signed and unsigned → signed gets converted to unsigned
   (b) Can silently break comparisons and loops

Loops:
   (a) Never use unsigned in countdown loops
   (b) Unsigned never becomes negative → infinite loop

13. Note: These modifiers only apply to integral types: those in which we can store decimal numbers.

14. To use the `setprecision()` command, we can set how precise we want the output numbers to be.

## Boolean Systems

1. The way to declare a boolean variable is as follows:
   `bool red_light {true};`

2. One thing to note here is that in languages like Java and Python, the boolean defaults are in upper-case as in 'True' or 'False'. But in C++, it is written in complete lower-case as 'true' and 'false'.

3. Note: In C++, just like Java there is no need for indentation- because we generally use the bracket system and while brackets are generally not needed for single liner execution lines, it is still advised to always use the bracket system to avoid a phenomenon called "fall-through".

## Characters and Text

1. It is possible to assign a valid ASCII code to a char variable, and the corresponding character will be stored in. We can choose to interpret that either as a character or as an integral value.

2. We can use the `static_cast<int>` to print the value itself and not the character while if we use the `char value = 65;` line, we would the character 'A' as our output since 65 is the ASCII code for 'A'.

3. The format to declare our characters is as follows:
   `char character1 {'a'};`

## The 'auto' keyword

1. In short: it lets the compiler decide the type.

2. We can always double-check the type assigned by the 'auto' keyword by checking the command `sizeof()` so that we can see if the correct type was assigned to the variable or not.

3. The 'auto' keyword is also very memory efficient and takes up the most appropriate one so that no space is wasted unnecessarily.

## Assignments

1. One key thing to understand is tha, in the 2 blocks of code shown below:
#### Block 1
```
int var123 {111};
std::cout << "value of var123 : " << std::endl;
var123=55;
std::cout << "new value of var123 : " << std::endl;
```

#### Block 2
```
int var123 = 111;
std::cout << "value of var123 : " << std::endl;
var123=55;
std::cout << "new value of var123 : " <<std::endl;
```
   While both the blocks mean the same thing, the approach in the second
   block is better because it is the best way to safely type cast and this
   also helps us catch errors during compilation, rather than having to
   deal with errors in the terminal.

2. The function `std::cout << std::boolalpha;` is used to print the values `true` and `false` explicitly because normally the integral values that they represent are what gets printed on the screen.

## Operations on Data

1. A few to name would be: add, subtratc, divide, multiply, increment, decrement, modulus, formatting and built-in utilities.

2. The integer quotient can be found using the `/` operator while the remainder is found out using the `%` operator which is also known as the modulus operator.

## Precedence and Associativity

1. The precedence of operators can be understood from the table given below:
| Category        | Operators |
|-----------------|-----------|
| **Assignment**  | `a = b`, `a += b`, `a -= b`, `a *= b`, `a /= b`, `a %= b`, `a &= b`, `a |= b`, `a ^= b`, `a <<= b`, `a >>= b` |
| **Increment**   | `++a`, `a++` |
| **Decrement**   | `--a`, `a--` |
| **Arithmetic**  | `+a`, `-a`, `a + b`, `a - b`, `a * b`, `a / b`, `a % b` |
| **Bitwise**     | `~a`, `a & b`, `a | b`, `a ^ b`, `a << b`, `a >> b` |
| **Logical**     | `!a`, `a && b`, `a || b` |
| **Comparison**  | `a == b`, `a != b`, `a < b`, `a > b`, `a <= b`, `a >= b`, `a <=> b` |
| **Member Access** | `a[...]`, `*a`, `&a`, `a->b`, `a.b`, `a->*b`, `a.*b` |
| **Function Call** | `a(...)` |
| **Comma**       | `a, b` |
| **Conditional** | `a ? b : c` |

