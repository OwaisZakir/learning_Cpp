// ============================================================
// C++ LEARNING NOTES — CHAPTER 01
// Topics: Variables, Data Types, Conversion, ASCII, Operators
// ============================================================

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // --------------------------------------------------------
    // SECTION 1: VARIABLES
    // Syntax: dataType variableName = value;
    // --------------------------------------------------------

    int pocketMoney = 2000;
    int tuitionFee = 500;
    int balance = pocketMoney - tuitionFee;

    cout << "Salam, Owais!" << endl;
    cout << "Pocket money: " << pocketMoney << endl;
    cout << "Tuition fee: " << tuitionFee << endl;
    cout << "Remaining balance: " << balance << endl;

    // --------------------------------------------------------
    // SECTION 2: CONSTANTS
    // A const object cannot be reassigned after initialization.
    // --------------------------------------------------------

    const double PI = 3.14159;
    cout << "\nPI: " << PI << endl;

    // PI = 3.14; // Uncommenting this causes a compilation error.

    // --------------------------------------------------------
    // SECTION 3: FUNDAMENTAL DATA TYPES AND sizeof
    // Exact sizes can vary by implementation, except sizeof(char)
    // is always 1 byte.
    // --------------------------------------------------------

    int age = 20;
    float height = 5.9f;
    double weight = 70.5;
    char grade = 'A';
    bool isPassed = true;

    cout << "\n--- Data Types ---" << endl;
    cout << "int: " << age
         << " | sizeof: " << sizeof(age) << " byte(s)" << endl;

    cout << "float: " << height
         << " | sizeof: " << sizeof(height) << " byte(s)" << endl;

    cout << "double: " << weight
         << " | sizeof: " << sizeof(weight) << " byte(s)" << endl;

    cout << "char: " << grade
         << " | sizeof: " << sizeof(grade) << " byte(s)" << endl;

    cout << "bool: " << boolalpha << isPassed
         << " | sizeof: " << sizeof(isPassed) << " byte(s)" << endl;

    // void represents the absence of a value; it is not a normal
    // object type that you can declare as: void x = ...;

    // --------------------------------------------------------
    // SECTION 4: INITIALIZATION — AVOID UNINITIALIZED LOCALS
    // --------------------------------------------------------

    int safeValue{}; // Value-initialized to zero.
    cout << "\nInitialized value: " << safeValue << endl;

    // int garbageValue;
    // cout << garbageValue; // Do not read an uninitialized local int.
    // Its value is indeterminate; reading it this way is unsafe.

    // --------------------------------------------------------
    // SECTION 5: TYPE CONVERSION
    // --------------------------------------------------------

    // 5A. Implicit conversion: int -> double
    int intValue = 10;
    double doubleValue = intValue;

    cout << "\n--- Implicit Conversion ---" << endl;
    cout << "intValue: " << intValue << endl;
    cout << "doubleValue: " << doubleValue << endl;

    // 5B. Floating-point -> int: fractional part is truncated.
    double decimalValue = 10.75;
    int truncatedValue = decimalValue;

    cout << "\n--- Conversion to int ---" << endl;
    cout << "Original: " << decimalValue << endl;
    cout << "Truncated: " << truncatedValue << endl;

    // 5C. Integer division vs floating-point division
    int numerator = 10;
    int denominator = 3;

    int integerDivision = numerator / denominator;
    double floatingDivision =
        static_cast<double>(numerator) / denominator;

    cout << "\n--- Division ---" << endl;
    cout << "Integer division: " << integerDivision << endl;
    cout << "Floating-point division: " << floatingDivision << endl;

    // 5D. Explicit conversion using static_cast
    double price = 99.99;
    int wholePrice = static_cast<int>(price);

    cout << "\nExplicit conversion: " << wholePrice << endl;

    // --------------------------------------------------------
    // SECTION 6: CHARACTERS AND CHARACTER CODES
    // A char can represent a character; numeric conversion
    // shows its code in the execution character set.
    // ASCII values: '1' = 49, 'A' = 65, 'a' = 97.
    // Note: numeric 1 is not the character '1'.
    // --------------------------------------------------------

    char letter = 'a';

    cout << "\n--- Character ---" << endl;
    cout << "Character: " << letter << endl;
    cout << "Character code: "
         << static_cast<int>(letter) << endl;

    cout << "Numeric 1: " << 1 << endl;
    cout << "Character '1': " << '1' << endl;
    cout << "Code of character '1': "
         << static_cast<int>('1') << endl;

    // --------------------------------------------------------
    // SECTION 7: ARITHMETIC OPERATORS
    // +, -, *, /, %
    // --------------------------------------------------------

    int valOne = 20;
    int valTwo = 5;

    cout << "\n--- Arithmetic Operators ---" << endl;
    cout << "Addition: " << valOne + valTwo << endl;
    cout << "Subtraction: " << valOne - valTwo << endl;
    cout << "Multiplication: " << valOne * valTwo << endl;
    cout << "Division: " << valOne / valTwo << endl;
    cout << "Remainder: " << valOne % valTwo << endl;

    // --------------------------------------------------------
    // SECTION 8: INCREMENT AND DECREMENT
    // Prefix: update first, then produce the new value.
    // Postfix: produce the old value, then update.
    // --------------------------------------------------------

    int counter = 20;

    cout << "\n--- Increment / Decrement ---" << endl;
    cout << "Post-increment: " << counter++ << endl;     // prints 20
    cout << "After post-increment: " << counter << endl; // 21

    counter = 20;
    cout << "Pre-increment: " << ++counter << endl; // prints 21

    counter = 20;
    cout << "Pre-decrement: " << --counter << endl; // prints 19

    counter = 20;
    cout << "Post-decrement: " << counter-- << endl;     // prints 20
    cout << "After post-decrement: " << counter << endl; // 19

    // --------------------------------------------------------
    // SECTION 9: RELATIONAL OPERATORS
    // ==, !=, <, >, <=, >=
    // Results are bool values.
    // --------------------------------------------------------

    int first = 2;
    int second = 4;

    cout << "\n--- Relational Operators ---" << endl;
    cout << boolalpha;
    cout << "first <= second: " << (first <= second) << endl;
    cout << "first < second: " << (first < second) << endl;
    cout << "first >= second: " << (first >= second) << endl;
    cout << "first > second: " << (first > second) << endl;
    cout << "first != second: " << (first != second) << endl;
    cout << "first == second: " << (first == second) << endl;

    // --------------------------------------------------------
    // SECTION 10: ASSIGNMENT OPERATORS
    // =, +=, -=, *=, /=, %=
    // --------------------------------------------------------

    int score = 10;
    score += 5; // Same effect as score = score + 5
    cout << "\nScore after += 5: " << score << endl;

    // --------------------------------------------------------
    // SECTION 11: LOGICAL OPERATORS
    // && = AND, || = OR, ! = NOT
    // --------------------------------------------------------

    cout << "\n--- Logical Operators ---" << endl;
    cout << "(5 > 3) && (8 < 6): "
         << ((5 > 3) && (8 < 6)) << endl; // false

    cout << "(5 > 3) || (8 < 6): "
         << ((5 > 3) || (8 < 6)) << endl; // true

    cout << "!(5 > 3): " << (!(5 > 3)) << endl; // false

    return 0;
}
