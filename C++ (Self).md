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

2. It is better to make the intent of our program clearer by using parantheses `()` wherever needed to show which functions needs to be executed earlier than the others and not rely much on the precendence itself.

3. Prefix: Increments/Decrements before an action is further performed on the variable.
Postfix: Increments/Decrements after the next immediate action has been performed.

4. These operators exist only for `+` and `-`, and not for `*`,`%` or `/`.

5. Compound Operators: Using statements like `a+=5` we can imply `a=a+5`. This is a form of short-hand notation.

6. Whenever we use the `boolalpha` version to print `true` or `false` without actually storing the result, then it is of paramount importance that we put the entire thing in brackets. For example, if we are printing the result of `num1 >= num2` without storing it anywhere, the output that would work error free would be:
`std::cout << "number 1 >= number 2 : " << (num1 >= num2) << std::endl;`

### Logical Operators

1. There are 3 main logical operators: AND (`&&`), NOT (`!`) and OR (`||`).

2. AND: Evaluates to true when all operands are true. A single false operand will bring the entire expression down to false.

3. OR: Evaluates to true when at least one operand is true. A single true operand will push the entire expression to evaluate to true.

4. NOT: Negates whatever operand you put it with

5. A thing to keep in mind here is that the operators that we use do have precedence but as stated before, we must use paranthese to override the precedence order if we need to serve our own specific purpose to get the desrired result. Refer to the `logical_operators.cpp` more to understand the usage of parantheses in overriding the precedence order.

## Output Formatting

1. We are prtimarily going to use the `<ios>` (a short-hand notation for 'input/output stream base') and the `<iomanip>` (a short-hand notation for input/output manipulators) libraries.

2. An alternative way to use the new line character is to use `\n`. For example, `std::cout << "Hello World" << std::endl;` can be also written as `std::cout << "Hello World\n";`.

3. `std::flush`: It causes immediate sending of data to the device connected to the stream.

4. `set::setw`: This is the function that sets a certain width which can be used to format the text into a tabular format.

5. `std::right` makes the data justified to the right while `std::left` makes the data justified to the left. The default is "right adjusted".

6. `std::internal`: In this one, sign is left aligned while data is right adjusted.

7. `std::refill`: We can use this to fill the gaps when we print the things in a tabular format.

8. `std::boolalpha` and `std::noboolalpha`: These control the boolean output format, either 1/0 or true/false. The default behaviour is same as `noboolalpha`. 

9. `std::showpos`: This can be used to show/hide the positive sign `+` for positive numbers. Meanwhile, the `std::noshowpos` command prevents the `+` sign from being displayed.

10. `std::dec`, `std::hex` and `std::oct`: These are used to print numbers in any of the above mentioned format (whether it is decimal, hexadecimal or octadecimal).

11. `std::showbase`: This functions shows the base for integral types.

12. `std::uppercase`: This changes the case of letters to uppercase when they are being printed to the terminal.

13. `std::lowercase`: This changes the case of letters to lowercase when they are being printed to the terminal.

14. `std::fixed`: formats floating-point output in fixed-point notation, showing a fixed number of digits after the decimal point.

15. `std::scientific`: formats floating-point output in scientific notation, using exponential form `(e)` with a fixed number of digits after the decimal point.

16. `std::showpoint`: forces the decimal points to be explicitly shown as we wish.

17. The remaining functions can be found at: `https://cppreference.com/`

## Limits

1. A few functions are: `std::numeric_limits<T>::min()`,`std::numeric_limits<T>::max()` and `std::numeric_limits<T>::lowest()`. To use these functions however, we would need to import the `limits` library. 

2. The above-mentioned functions can be used to find details of different data types. A few examples would clear this.
   (a) std::numeric_limits<T>::max() → largest finite value of T.
   
   (b) std::numeric_limits<T>::min() 
   integers: smallest (most negative) value
   floating-point: smallest positive normalized value (not negative)

   (c) std::numeric_limits<T>::lowest() → most negative finite value (same as min() for integers, different for floating-point).

3. The program `limits_functions.cpp` shows a few examples on how to use the above-mentioned functions.



Rule: for generic code, use max() and lowest(), not min().

## Math Functions

1. To use the math functions, we need to import the `<cmath` library. A few of the functions have been discussed below.

2. `std::floor(x)`: Returns the greatest integer value less than or equal to x. The result is a floating-point number representing that integer.

3. `std::ceil(x)`: Returns the smallest integer value greater than or equal to x. The result is a floating-point number representing that integer.

4. `std::abs(x)`: Returns the absolute (non-negative) value of x. Works for integers and floating-point types.

5. `std::cos(x)`: Returns the cosine of x. x is interpreted in radians.

6. `std::exp(x)`: Returns e raised to the power x. Here, e is Euler’s number (≈ 2.71828).

7. `std::log(x)`: Returns the natural logarithm (base e) of x. x must be greater than 0.

8. `std::pow(x, y)`: Returns x raised to the power y. Both x and y are floating-point compatible.

9. `std::sqrt(x)`: Returns the square root of x. x must be non-negative.

10. `std::round(x)`: Rounds x to the nearest integer value. Halfway cases are rounded away from zero.

11. `std::sin(x)`: Returns the sine of x. x is interpreted in radians.

12. `std::tan(x)`: Returns the tangent of x. x is interpreted in radians and must not be an odd multiple of π/2.

13. Integral types less than 4 bytes in size don't support arithmetic operations. For example, on `char` or `short int`.

14. The same behaviour is present on other operators like bitwise shift operators (>> and <<).

## Flow Control: Conditional Programming

1. There are 4 primary ones: `if`, `else`, `switch` and `ternary` operator.

### `if` statement:

1. One thing to note is that sometimes using `&&` is better than using a `nested-if` statement.

2. `else if`: allows us to test several conditions and also ensures no fall-through happens, which is a common logical flaw when `nested-if`s are used.

### switch statement

1. The use remains same as the `else-if` statements; to test for several conditions.

2. `break`: This is very important after each case. It stops processing the switch block when a sucessful case has been found. If the `break` statement is not there, all the cases following the current case will be executed.

3. Conditions of the condition: Integral types and enums: int, long, unsigned short, etc.

### ternary operator

1. This is another way to write `if` statement.

2. The syntax is as follows:
   `result = (condition) ? option1 : option2;`

3. One thing to keep in mind is that the types which is also shown in the last snippet of the code that using the `{}` in a statement like `auto max1 = {(a>b)? 98.5 : b};` because of the braces {}, this is list-initialization, so auto deduces max1 as a `std::initializer_list<T>`, not a scalar. In many cases this either: causes a compilation error, or gives us `std::initializer_list<float>` instead of a numeric value.

## Loops

1. We would be focusing on 4 major forms of loops which are as follows:
   `for` loop, `range based for` loop, `while` loop and `do while` loop.

2. Pillars of any loop:
   (a) Iterator
   (b) starting Point
   (c) Test (controls when the loop stops)
   (d) Increment/ Decrement
   (e) Loop body

3. If we want to get the value of the iterator outside the loop, then we should declare it oustide the scope of the loop itself.


### `for` loops

1. Syntax is: `for(iterator initialization, condition for iterator, increment/decrement criteria) { action to be done }`.

2.  We can see there is another type called `size_t`. This is not a type, just a type alias for some unsigned int representation. The format is same as that for a `for` loop, except when we declare the type as `int`, we use `size_t`.

### `while` loops

1. Syntax is: `while (iterator < conditional value) { action_to_be_taken; increment_condition }`.

2. This loop is primarily used when we do not know how many times a loop is supposed to run, but we are sure that it is supposed to run until a condition evaluates to false. 
