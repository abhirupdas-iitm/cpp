# Notes

## General
1. There is no benefit in uploading or committing `.exe` files generated after compiling a C++ program. We should only commit source files to version control.

## FirstCppProgram
1. `std::endl` inserts a newline and flushes the output buffer. We should prefer `'\n'` when flushing is not required because it is faster.
2. We compile programs using:
   `g++ -std=c++20 program_name.cpp -o program_name.exe`
3. To run the program, we use:
   `./program_name.exe`

## Comments
1. We use `//` for single-line comments and `/* ... */` for multi-line comments.
2. We cannot nest multi-line comments.

## Errors
1. There are three common categories of issues we need to watch for:
   (a) Compile-time errors  
   (b) Run-time errors  
   (c) Warnings

## Statements and Functions
1. A statement is a basic unit of execution in a C++ program and usually ends with a semicolon.
2. Execution proceeds sequentially unless we change the flow using control statements, function calls, or returns.
3. We use functions to encapsulate reusable behavior. When we store a function’s return value, we must use a compatible type for the receiving variable.

## Data Input and Output
1. We use the `<<` operator to insert data into an output stream such as `std::cout`.
2. The following table shows common standard streams:

   |Stream|Purpose|
   |------|-------|
   |std::cout|Printing data to the console (terminal)|
   |std::cin|Reading data from the terminal|
   |std::cerr|Printing errors to the console|
   |std::clog|Printing log messages to the console|

3. `int`, `char`, `float`, `double`, `bool`, and `void` are built-in types. Library types such as `std::string`, `std::vector`, and `std::map` come from the standard library.
   (a) We have to include headers like `<string>`, `<vector>`, `<map>`, `<iostream>`  
   (b) They live inside `namespace std`  
   (c) They are not core language types

## Execution Model
1. `int c = 0;` initializes `c` with value 0.  
   `int c;` leaves `c` uninitialized (for automatic storage), so it contains an indeterminate value. We must not read it before assigning a value.

## Core Language vs Standard Library vs STL
1. We can view the structure like this:
C++
├── Core Features   ← language rules and syntax
└── Standard Library
    └── STL         ← containers, algorithms, iterators

2. Notes on fundamental types:

#### int
We use it to store whole numbers (positive, negative, zero).  
Typically 4 bytes.  
Commonly used for counting and indexing.  
`int x = 42;`

#### double
We use it for double-precision floating-point numbers.  
Typically 8 bytes.  
Preferred default for real-number calculations.  
`double pi = 3.1415926535;`

#### float
We use it for single-precision floating-point numbers.  
Typically 4 bytes.  
Used when reduced precision is acceptable.  
`float temp = 36.5f;`

#### char
We use it to store a character code unit.  
Typically 1 byte.  
`char c = 'A';`

#### bool
We use it to store `true` or `false`.  
Printed as 1/0 by default unless we enable `boolalpha`.  
`bool isReady = true;`

#### void
We use it to represent no value.  
Used for functions with no return and generic pointers (`void*`).  
`void print() { }`

#### auto
We use it to request type deduction at compile time based on the initializer.  
It reduces repetition and improves readability. For example: 
```
auto x = 10; // int
auto y = 3.14; // double
```


#### ... (ellipsis)
We use it for C-style variadic functions. It is rare in modern C++.  
`void func(int n, ...);`

### Number Systems
(a) Binary (Base-2)  
Digits: 0, 1  
This is the native representation in hardware.  
We rely on it for bitwise operations.  
Example: `int x = 5; // 00000101`

(b) Octal (Base-8)  
Digits: 0–7  
We denote it with a leading `0`.  
`int x = 010; // decimal 8`  
We still encounter it in areas like Unix permissions, but we generally avoid it in regular code.

(c) Hexadecimal (Base-16)  
Digits: 0–9, A–F  
We denote it with `0x`.  
`int x = 0x1A; // decimal 26`  
We often use it for low-level work and debugging.

4. As value ranges grow, we need more bits to represent them.
5. Hexadecimal gives us a compact and readable representation of binary data.
6. Octal exists but is less common in everyday modern C++ code.
7. We should avoid narrowing conversions such as `int x = 2.9;` because they lose information.
8. Three initialization forms:

   |Type|Syntax|Narrowing|Safety|
   |----|------|---------|------|
   |Braced|int x{10};|Prevented|High|
   |Functional|int x(10);|Allowed|Medium|
   |Assignment|int x = 10;|Allowed|Medium|

10. We use the `sizeof` operator to get the size of a type or object in bytes.
11. Variable naming rules remain the same; we must follow all listed constraints.

12. Signed vs Unsigned in C++
We use signed types when we need negative and positive values.  
We use unsigned types when we only need non-negative values and want a larger positive range.

Key differences:
   (a) Same bits, different interpretation  
   (b) Signed overflow → undefined behavior  
   (c) Unsigned overflow → defined wraparound

Loop caution:
   We should avoid unsigned types in countdown loops.

13. Signed/unsigned modifiers apply only to integral types.
14. We use `std::setprecision()` (from `<iomanip>`) to control floating-point display precision.

## Boolean Systems
1. We declare booleans like this: `bool red_light {true};`
2. In C++, we write `true` and `false` in lowercase.
3. We use braces for clarity and safety. Fall-through is specifically related to `switch` cases, not indentation.

## Characters and Text
1. We can assign a numeric code to a `char` and interpret it as a character.
2. We use `static_cast<int>(ch)` when we want to print the numeric value of a char.
3. Declaration format: `char character1 {'a'};`

## The 'auto' keyword
1. We use it when we want the compiler to deduce the type.
2. We can use `sizeof()` to inspect size, but not the exact deduced type.
3. `auto` does not automatically optimize memory; it only deduces type.

## Assignments
1. Braced initialization is generally safer because it prevents narrowing. We should prefer it when possible.

2. We use `std::cout << std::boolalpha;` when we want booleans printed as `true`/`false` instead of 1/0.

## Operations on Data
1. Common operations include add, subtract, divide, multiply, increment, decrement, modulus, formatting, and built-in utilities.
2. We use `/` for quotient and `%` for remainder with integers.

## Precedence and Associativity
1. The table below groups operators by category (not strict precedence order):

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

2. We should use parentheses to make evaluation order explicit.
3. Prefix updates before use; postfix updates after use.
4. Increment/decrement apply only to `+` and `-`.
5. We use compound assignments like `a += 5` as shorthand for `a = a + 5`.
6. We should wrap comparisons in parentheses when streaming them to output.

### Logical Operators
1. We use three main logical operators: AND (`&&`), NOT (`!`), OR (`||`).
2. AND is true only if all operands are true.
3. OR is true if at least one operand is true.
4. NOT negates the operand.
5. We should use parentheses to override precedence when needed.

## Output Formatting
1. We have to include `<iostream>` and `<iomanip>` for stream formatting.
2. We can use `\n` instead of `std::endl` when we do not need flushing.
3. We use `std::flush` to force buffer flush.
4. We use `std::setw` to set field width.
5. We use `std::right` and `std::left` for alignment.
6. We use `std::internal` to separate sign alignment.
7. We use `std::setfill` to set the fill character.
8. We use `std::boolalpha` / `std::noboolalpha` to control boolean text output.
9. We use `std::showpos` / `std::noshowpos` to control plus sign display.
10. We use `std::dec`, `std::hex`, `std::oct` to set numeric base.
11. We use `std::showbase` to show numeric base prefixes.
12. We use `std::uppercase` where uppercase formatting is supported.
13. There is no standard `std::lowercase` manipulator.
14. We use `std::fixed` for fixed floating format.
15. We use `std::scientific` for scientific notation.
16. We use `std::showpoint` to force decimal point display.
17. We can refer to cppreference for the remaining manipulators.

## Limits
1. We include `<limits>` to use:
   `std::numeric_limits<T>::min()`, `max()`, `lowest()`.

2. Meanings remain the same as listed.

Rule: For generic code, we prefer `max()` and `lowest()` over `min()`.

## Math Functions
1. We have to include `<cmath>`.
2–12. We use the listed functions as defined.
13. Small integral types like `char` and `short` do support arithmetic; they are promoted to `int` during expressions.
14. The same promotion rules apply to shift operators.

## Flow Control, Loops, Arrays, Pointers, DMA
All earlier content remains, but we interpret it with the corrected rules above:
- We treat `size_t` as a standard unsigned integer type.
- We assume zero-initialization only when we explicitly value-initialize arrays.
- We include `<iterator>` when we use `std::size`.
- We ensure C-style strings are null-terminated.
- We treat out-of-bounds access as undefined behavior.
- We assume pointer sizes are typically uniform across object pointer types on a platform.
- We treat virtual memory details as OS-managed abstraction.
