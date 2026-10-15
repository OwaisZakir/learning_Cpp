
#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main()
{
     // ==========================================
     // 1. VARIABLES
     // ==========================================
     int pocketMoney = 2000;
     int tuitionFee = 500;
     int balance = pocketMoney - tuitionFee;

     cout << "=== Variables ===\n";
     cout << "Pocket Money: " << pocketMoney << '\n';
     cout << "Tuition Fee: " << tuitionFee << '\n';
     cout << "Balance: " << balance << "\n\n";

     // ==========================================
     // 2. CONSTANTS
     // ==========================================
     const double PI = 3.14159;

     cout << "=== Constants ===\n";
     cout << "PI: " << PI << "\n\n";

     // PI = 3.14; // Error: const value cannot change

     // ==========================================
     // 3. DATA TYPES
     // ==========================================
     int age = 20;
     float height = 5.9f;
     double weight = 70.5;
     char grade = 'A';
     bool isPassed = true;

     cout << "=== Data Types ===\n";
     cout << "Age: " << age << '\n';
     cout << "Height: " << height << '\n';
     cout << "Weight: " << weight << '\n';
     cout << "Grade: " << grade << '\n';

     cout << boolalpha;
     cout << "Passed: " << isPassed << '\n';

     cout << "Size of int: " << sizeof(age) << '\n';
     cout << "Size of float: " << sizeof(height) << '\n';
     cout << "Size of double: " << sizeof(weight) << '\n';
     cout << "Size of char: " << sizeof(grade) << '\n';
     cout << "Size of bool: " << sizeof(isPassed) << "\n\n";

     // ==========================================
     // 4. INITIALIZATION
     // ==========================================
     int safeValue{};

     cout << "=== Initialization ===\n";
     cout << "Safe value: " << safeValue << "\n\n";

     // Always initialize local variables before using them.
     // Reading an uninitialized local int is unsafe.

     // ==========================================
     // 5. TYPE CONVERSION
     // ==========================================
     int intValue = 10;
     double doubleValue = intValue; // Implicit conversion

     cout << "=== Type Conversion ===\n";
     cout << "Integer to double: " << doubleValue << '\n';

     double decimalValue = 10.75;
     int convertedValue = static_cast<int>(decimalValue);

     cout << "Original: " << decimalValue << '\n';
     cout << "Converted to int: " << convertedValue << '\n';
     // Output: 10. Fraction is truncated, not rounded.

     int a = 10;
     int b = 3;

     cout << "Integer division: " << a / b << '\n';
     cout << "Floating division: "
          << static_cast<double>(a) / b << "\n\n";

     // ==========================================
     // 6. CHARACTERS AND ASCII
     // ==========================================
     char letter = 'A';

     cout << "=== Characters ===\n";
     cout << "Character: " << letter << '\n';
     cout << "Character code: "
          << static_cast<int>(letter) << '\n';

     cout << "Number 1: " << 1 << '\n';
     cout << "Character '1': " << '1' << '\n';
     cout << "ASCII code of '1': "
          << static_cast<int>('1') << "\n\n";

     // ASCII-compatible systems:
     // '0' = 48, '1' = 49, 'A' = 65, 'a' = 97.

     // ==========================================
     // 7. NUMBER SYSTEMS
     // ==========================================
     cout << "=== Number Systems ===\n";

     cout << "Decimal 10: " << 10 << '\n';
     cout << "Octal 012: " << 012 << '\n';
     cout << "Binary 0b1010: " << 0b1010 << '\n';
     cout << "Hexadecimal 0xA: " << 0xA << "\n\n";

     // These all represent decimal 10.
     // Binary literal 0b... is supported in C++14 and later.
     // Hexadecimal digits: A=10, B=11, C=12, D=13, E=14, F=15.

     // ==========================================
     // 8. ARITHMETIC OPERATORS
     // ==========================================
     int firstNumber = 20;
     int secondNumber = 5;

     cout << "=== Arithmetic ===\n";
     cout << "Addition: " << firstNumber + secondNumber << '\n';
     cout << "Subtraction: " << firstNumber - secondNumber << '\n';
     cout << "Multiplication: " << firstNumber * secondNumber << '\n';
     cout << "Division: " << firstNumber / secondNumber << '\n';
     cout << "Remainder: " << firstNumber % secondNumber << "\n\n";

     // ==========================================
     // 9. INCREMENT AND DECREMENT
     // ==========================================
     cout << "=== Increment / Decrement ===\n";

     int x = 5;

     cout << "Post-increment: " << x++ << '\n';
     // Prints 5 first, then x becomes 6.

     cout << "After post-increment: " << x << '\n';
     // Prints 6.

     x = 5;

     cout << "Pre-increment: " << ++x << '\n';
     // x becomes 6 first, then prints 6.

     x = 5;

     cout << "Post-decrement: " << x-- << '\n';
     // Prints 5 first, then x becomes 4.

     cout << "After post-decrement: " << x << '\n';
     // Prints 4.

     x = 5;

     cout << "Pre-decrement: " << --x << "\n\n";
     // x becomes 4 first, then prints 4.

     // ==========================================
     // 10. RELATIONAL OPERATORS
     // ==========================================
     int n1 = 2;
     int n2 = 4;

     cout << "=== Relational Operators ===\n";
     cout << "n1 < n2: " << (n1 < n2) << '\n';
     cout << "n1 > n2: " << (n1 > n2) << '\n';
     cout << "n1 == n2: " << (n1 == n2) << '\n';
     cout << "n1 != n2: " << (n1 != n2) << '\n';
     cout << "n1 <= n2: " << (n1 <= n2) << '\n';
     cout << "n1 >= n2: " << (n1 >= n2) << "\n\n";

     // ==========================================
     // 11. ASSIGNMENT OPERATORS
     // ==========================================
     int score = 10;

     score += 5; // score = score + 5
     cout << "Score after += 5: " << score << '\n';

     score -= 2; // score = score - 2
     cout << "Score after -= 2: " << score << "\n\n";

     // ==========================================
     // 12. LOGICAL OPERATORS
     // ==========================================
     cout << "=== Logical Operators ===\n";

     cout << "AND: "
          << ((5 > 3) && (8 < 6)) << '\n';

     cout << "OR: "
          << ((5 > 3) || (8 < 6)) << '\n';

     cout << "NOT: "
          << (!(5 > 3)) << "\n\n";

     // AND: both conditions must be true.
     // OR: at least one condition must be true.
     // NOT: reverses true/false.

     // ==========================================
     // 13. USER INPUT: cin AND getline
     // ==========================================
     // Uncomment this section to test input.

     // string name;
     // int userAge;

     // cout << "Enter your full name: ";
     // getline(cin, name);

     // cout << "Enter your age: ";
     // cin >> userAge;

     // cout << "Hello, " << name << '\n';
     // cout << "Age: " << userAge << '\n';

     // getline(cin, name) reads a full line, including spaces.
     // cin >> name reads only until whitespace.

     // If cin >> is used before getline(), a newline may remain
     // in the input buffer. Use this to discard the rest of the line:
     //
     // cin.ignore(numeric_limits<streamsize>::max(), '\n');

     // ==========================================
     // 14. NEWLINES AND ESCAPE SEQUENCES
     // ==========================================
     string userName = "chacha";

     cout << "=== Text Formatting ===\n";
     cout << "Hello, \"" << userName << "\"\n";
     cout << "First line\nSecond line\n";
     cout << "Column 1\tColumn 2\n";

     // \n  = new line
     // \t  = tab
     // \"  = double quote
     // endl = new line + flush output

     return 0;
}
