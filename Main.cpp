// /*
// ===============================================================================
// C++ FUNDAMENTALS — ORGANIZED NOTES + PROBLEMS WITH SOLUTIONS
// ===============================================================================

// How to use this file:
// 1. Save as cpp_fundamentals_sorted_with_solutions.cpp
// 2. Compile with C++14 or newer.
// 3. Run the program and read each section's output.
// 4. Each practice problem includes its problem statement, idea, and solution.

// Topics:
//   1. Variables and constants
//   2. Data types and sizeof
//   3. Initialization
//   4. Type conversion and division
//   5. Characters and ASCII-compatible codes
//   6. Number systems
//   7. Arithmetic operators
//   8. Increment and decrement
//   9. Relational, assignment, and logical operators
//  10. Input: cin, getline, cin.ignore
//  11. Escape sequences
//  12. Solved practice problems

// Note: This is one complete program. It intentionally has only one main().
// ===============================================================================
// */

#include <iostream>
#include <string>
using namespace std;

// -----------------------------------------------------------------------------
// // SECTION 1 — VARIABLES AND CONSTANTS
// // Problem idea: Store pocket money and tuition fee, then calculate the balance.
// // -----------------------------------------------------------------------------
// void demonstrateVariablesAndConstants()
// {
//      cout << "\n========== 1. VARIABLES AND CONSTANTS ==========\n";

//      int pocketMoney = 2000;
//      int tuitionFee = 500;
//      int balance = pocketMoney - tuitionFee;
//      const double PI = 3.14159;

//      cout << "Pocket money: Rs. " << pocketMoney << '\n';
//      cout << "Tuition fee:  Rs. " << tuitionFee << '\n';
//      cout << "Balance:      Rs. " << balance << '\n';
//      cout << "PI: " << PI << '\n';

//      // PI = 3.14; // ERROR: a const variable cannot be reassigned.
// }

// // -----------------------------------------------------------------------------
// // SECTION 2 — DATA TYPES AND sizeof
// // Sizes other than sizeof(char) can vary by system/compiler.
// // sizeof(char) is always 1 byte.
// // -----------------------------------------------------------------------------
// void demonstrateDataTypes()
// {
//      cout << "\n========== 2. DATA TYPES AND sizeof ==========\n";

//      int age = 20;
//      float height = 5.9f;
//      double weight = 70.5;
//      char grade = 'A';
//      bool passed = true;

//      cout << "int age: " << age << " | bytes: " << sizeof(age) << '\n';
//      cout << "float height: " << height << " | bytes: " << sizeof(height) << '\n';
//      cout << "double weight: " << weight << " | bytes: " << sizeof(weight) << '\n';
//      cout << "char grade: " << grade << " | bytes: " << sizeof(grade) << '\n';
//      cout << boolalpha;
//      cout << "bool passed: " << passed << " | bytes: " << sizeof(passed) << '\n';
//      cout << noboolalpha;
// }

// // -----------------------------------------------------------------------------
// // SECTION 3 — INITIALIZATION
// // Problem idea: Initialize a variable safely before reading it.
// // -----------------------------------------------------------------------------
// void demonstrateInitialization()
// {
//      cout << "\n========== 3. INITIALIZATION ==========\n";

//      int safeValue{}; // Value-initialized to 0.
//      cout << "safeValue = " << safeValue << '\n';

//      // int uninitializedValue;
//      // cout << uninitializedValue; // Do not do this: value is indeterminate.
// }

// // -----------------------------------------------------------------------------
// // SECTION 4 — TYPE CONVERSION AND DIVISION
// // -----------------------------------------------------------------------------
// void demonstrateTypeConversion()
// {
//      cout << "\n========== 4. TYPE CONVERSION AND DIVISION ==========\n";

//      int wholeNumber = 10;
//      double convertedDouble = wholeNumber; // Implicit conversion: int -> double.

//      double decimalNumber = 10.75;
//      int truncatedNumber = static_cast<int>(decimalNumber); // Fraction is removed.

//      int numerator = 10;
//      int denominator = 3;

//      cout << "int to double: " << convertedDouble << '\n';
//      cout << "10.75 converted to int: " << truncatedNumber << " (not rounded)\n";
//      cout << "Integer division 10 / 3: " << numerator / denominator << '\n';
//      cout << "Floating division 10 / 3: "
//           << static_cast<double>(numerator) / denominator << '\n';
// }

// // -----------------------------------------------------------------------------
// // SECTION 5 — CHARACTERS AND CHARACTER CODES
// // The listed codes are for ASCII-compatible execution character sets.
// // -----------------------------------------------------------------------------
// void demonstrateCharacters()
// {
//      cout << "\n========== 5. CHARACTERS AND CHARACTER CODES ==========\n";

//      char letter = 'A';
//      cout << "Character: " << letter << '\n';
//      cout << "Code of 'A': " << static_cast<int>(letter) << '\n';
//      cout << "Number 1: " << 1 << '\n';
//      cout << "Character '1': " << '1' << '\n';
//      cout << "Code of character '1': " << static_cast<int>('1') << '\n';
//      cout << "ASCII-compatible codes: '0'=48, '1'=49, 'A'=65, 'a'=97\n";
// }

// // -----------------------------------------------------------------------------
// // SECTION 6 — NUMBER SYSTEMS
// // Decimal 10, octal 012, binary 0b1010 (C++14+), and hex 0xA all mean 10.
// // -----------------------------------------------------------------------------
// void demonstrateNumberSystems()
// {
//      cout << "\n========== 6. NUMBER SYSTEMS ==========\n";
//      cout << "Decimal 10: " << 10 << '\n';
//      cout << "Octal 012: " << 012 << '\n';
//      cout << "Binary 0b1010: " << 0b1010 << '\n';
//      cout << "Hexadecimal 0xA: " << 0xA << '\n';
// }

// // -----------------------------------------------------------------------------
// // SECTION 7 — ARITHMETIC OPERATORS
// // -----------------------------------------------------------------------------
// void demonstrateArithmetic()
// {
//      cout << "\n========== 7. ARITHMETIC OPERATORS ==========\n";

//      int a = 20;
//      int b = 6;

//      cout << "Addition:       " << a + b << '\n';
//      cout << "Subtraction:    " << a - b << '\n';
//      cout << "Multiplication: " << a * b << '\n';
//      cout << "Integer divide: " << a / b << '\n';
//      cout << "Remainder:      " << a % b << '\n';
// }

// // -----------------------------------------------------------------------------
// // SECTION 8 — INCREMENT AND DECREMENT
// // Postfix: use old value, then update. Prefix: update first, then use new value.
// // -----------------------------------------------------------------------------
// void demonstrateIncrementDecrement()
// {
//      cout << "\n========== 8. INCREMENT AND DECREMENT ==========\n";

//      int x = 5;
//      cout << "x++ prints: " << x++ << '\n';
//      cout << "x after x++: " << x << '\n';

//      x = 5;
//      cout << "++x prints: " << ++x << '\n';

//      x = 5;
//      cout << "x-- prints: " << x-- << '\n';
//      cout << "x after x--: " << x << '\n';

//      x = 5;
//      cout << "--x prints: " << --x << '\n';
// }

// // -----------------------------------------------------------------------------
// // SECTION 9 — RELATIONAL, ASSIGNMENT, AND LOGICAL OPERATORS
// // -----------------------------------------------------------------------------
// void demonstrateOperators()
// {
//      cout << "\n========== 9. OTHER OPERATORS ==========\n";

//      int first = 2;
//      int second = 4;
//      cout << boolalpha;
//      cout << "2 < 4:  " << (first < second) << '\n';
//      cout << "2 == 4: " << (first == second) << '\n';
//      cout << "2 != 4: " << (first != second) << '\n';

//      int score = 10;
//      score += 5; // Same as score = score + 5.
//      cout << "Score after += 5: " << score << '\n';
//      score -= 2;
//      cout << "Score after -= 2: " << score << '\n';

//      cout << "(5 > 3) && (8 < 6): " << ((5 > 3) && (8 < 6)) << '\n';
//      cout << "(5 > 3) || (8 < 6): " << ((5 > 3) || (8 < 6)) << '\n';
//      cout << "!(5 > 3): " << (!(5 > 3)) << '\n';
//      cout << noboolalpha;
// }

// // -----------------------------------------------------------------------------
// // SECTION 10 — INPUT EXAMPLE
// // Uncomment the call in main() if you want to test this interactively.
// // cin >> name reads one word; getline reads a complete line.
// // -----------------------------------------------------------------------------
// void demonstrateInput()
// {
//      cout << "\n========== 10. INPUT: cin AND getline ==========\n";

//      string fullName;
//      int age;

//      cout << "Enter your full name: ";
//      getline(cin, fullName);

//      cout << "Enter your age: ";
//      cin >> age;

//      cout << "Hello " << fullName << ", you are " << age << " years old.\n";
// }

// // -----------------------------------------------------------------------------
// // SECTION 11 — ESCAPE SEQUENCES
// // -----------------------------------------------------------------------------
// void demonstrateEscapeSequences()
// {
//      cout << "\n========== 11. ESCAPE SEQUENCES ==========\n";
//      cout << "New line: first line\nsecond line\n";
//      cout << "Tab: Column 1\tColumn 2\n";
//      cout << "Double quote: \"Hello\"\n";
// }

// // -----------------------------------------------------------------------------
// // SECTION 12 — SOLVED PRACTICE PROBLEMS
// // Each problem states the task and then shows a working solution.
// // -----------------------------------------------------------------------------
// void solvedProblems()
// {
//      cout << "\n========== 12. SOLVED PRACTICE PROBLEMS ==========\n";

//      // PROBLEM 1: Add two numbers.
//      // Solution: Read two numbers and print their sum.
//      {
//           int a = 12;
//           int b = 8;
//           cout << "Problem 1 — Sum of 12 and 8: " << a + b << '\n';
//      }

//      // PROBLEM 2: Find the average of three numbers.
//      // Solution: Convert the total to double before dividing to preserve decimals.
//      {
//           double a = 10, b = 15, c = 20;
//           double average = (a + b + c) / 3.0;
//           cout << "Problem 2 — Average of 10, 15, 20: " << average << '\n';
//      }

//      // PROBLEM 3: Calculate the area of a circle for radius 5.
//      // Formula: area = PI * radius * radius.
//      {
//           const double PI = 3.14159;
//           double radius = 5;
//           cout << "Problem 3 — Circle area (radius 5): "
//                << PI * radius * radius << '\n';
//      }

//      // PROBLEM 4: Convert 25 Celsius to Fahrenheit.
//      // Formula: F = (C * 9 / 5) + 32. Use decimals to avoid integer division.
//      {
//           double celsius = 25;
//           double fahrenheit = (celsius * 9.0 / 5.0) + 32;
//           cout << "Problem 4 — 25 C in Fahrenheit: " << fahrenheit << '\n';
//      }

//      // PROBLEM 5: Increase a salary by Rs. 5000 using an assignment operator.
//      {
//           int salary = 50000;
//           salary += 5000;
//           cout << "Problem 5 — Salary after increase: Rs. " << salary << '\n';
//      }

//      // PROBLEM 6: Swap two values.
//      // Solution: Keep one value temporarily so neither value is lost.
//      {
//           int a = 3;
//           int b = 9;
//           int temp = a;
//           a = b;
//           b = temp;
//           cout << "Problem 6 — After swapping: a = " << a << ", b = " << b << '\n';
//      }

//      // PROBLEM 7: Calculate rectangle area and perimeter.
//      // Formulas: area = length * width; perimeter = 2 * (length + width).
//      {
//           int length = 8;
//           int width = 4;
//           cout << "Problem 7 — Rectangle area: " << length * width << '\n';
//           cout << "Problem 7 — Rectangle perimeter: "
//                << 2 * (length + width) << '\n';
//      }

//      // PROBLEM 8: Print the character code for 'A'.
//      {
//           char character = 'A';
//           cout << "Problem 8 — Code of 'A': "
//                << static_cast<int>(character) << '\n';
//      }

//      // PROBLEM 9: Build a greeting from a name and age.
//      {
//           string name = "Harsh";
//           int age = 24;
//           cout << "Problem 9 — Hello " << name << ", you are "
//                << age << " years old.\n";
//      }

//      // PROBLEM 10: Calculate a simple bill after a 10% discount.
//      // This extra example practices floating-point arithmetic.
//      {
//           double bill = 2500.0;
//           double discount = bill * 0.10;
//           cout << "Problem 10 — Bill after 10% discount: Rs. "
//                << bill - discount << '\n';
//      }
// }

int main()
{
     //      cout << fixed << setprecision(2);
     //      cout << "C++ FUNDAMENTALS — NOTES AND SOLUTIONS\n";

     //      demonstrateVariablesAndConstants();
     //      demonstrateDataTypes();
     //      demonstrateInitialization();
     //      demonstrateTypeConversion();
     //      demonstrateCharacters();
     //      demonstrateNumberSystems();
     //      demonstrateArithmetic();
     //      demonstrateIncrementDecrement();
     //      demonstrateOperators();
     //      demonstrateEscapeSequences();
     //      solvedProblems();

     //      // To test user input, uncomment the next line. The program will wait for input.
     //      // demonstrateInput();

     //      // Module 3: Control-Flow Statements

     //      // Decision Making
     //      // • if
     //      // • if else
     //      // • nested if
     //      // • else if ladder
     //      // • if ladder
     //      // • switch case
     //      // Coding Questions
     //      // 4. Take two numbers as input and print the larger number.
     //      // 5. Take a number as input and determine whether it is even or odd.
     //      // 6. Take a number as input and determine whether it is positive, negative, or zero.
     //      // 7. Take a year as input and determine whether it is a leap year.
     //      // 8. Take units as input. Calculate the electricity bill based on the number of units... (text cut off)
     //      // 9. Take the purchase amount as input and apply the following discount and price

     // ---------------- if else------------
     // if ( age < 18){ ap ok h}
     // else{ ap ok ni hain }

     int ifAge = 8; 
     // int ifAge = 18;
     // int ifAge = 7;

     if (ifAge >= 18)
     {
          cout << "Valid";
     }
     else if ( ifAge < 18 && ifAge != 0)
     {
          cout << "!Valid";
     } else{
          cout << "Enjoy";
     }


     #include <iostream>

#include <string>
using namespace std;

class Solution {

public:

    int findLarger(int a, int b) {
        int temp = 0;
       if(a < b){
        temp = b;
       }else{
        temp = a;
       }

        return temp;
    }
};

#include <string>
using namespace std;

class Solution {

public:

    string checkEvenOdd(int num) {

        string val;

        if (num % 2 == 0) {
            return "Even";
        } else {
            return "Odd";
        }

        return val;
    }
};

#include <string>
using namespace std;

class Solution {

public:

    string checkNumber(int num) {

        string val ;

       if (num > 0) {
            val = "Positive";
        } else if (num < 0) {
            val = "Negative";
        } else {
            val = "Zero";
        }

        return val;
    }
};

#include <bits/stdc++.h>
using namespace std;

class Solution {

public:

    string checkLeapYear(int year) {

       if (year % 400 == 0 || year % 4 == 0) {
            return "Leap Year";
        }  else {
            return "Not a Leap Year";
        }
    

        return "";
    }
};

class Solution {
public:
    double calculateBill(int units) {
        double bill = 0;

        if (units <= 100) {
            bill = units * 4.2;
        } else if (units <= 200) {
            bill = (100 * 4.2) + ((units - 100) * 6);
        } else if (units <= 400) {
            bill = (100 * 4.2) + (100 * 6) + ((units - 200) * 8);
        } else {
            bill = (100 * 4.2) + (100 * 6) + (200 * 8) + ((units - 400) * 13);
        }

        return bill;
    
    }
};
#include <iostream>
using namespace std;

int main() {

        int amount;
        cin >> amount;

        double discount = 0;

        if (amount < 1000) {
            discount = 0;
        } else if (amount < 5000) {
            discount = 10;
        } else if (amount < 10000) {
            discount = 20;
        } else {
            discount = 30;
        }

        cout << amount - (amount * discount / 100);
        return 0;
 
}
#include <iostream>
using namespace std;

int main() {

    char isVowel;
    cin >> isVowel;

    if (isVowel == 'a' || isVowel == 'A' ||
        isVowel == 'e' || isVowel == 'E' ||
        isVowel == 'i' || isVowel == 'I' ||
        isVowel == 'o' || isVowel == 'O' ||
        isVowel == 'u' || isVowel == 'U') {
        cout << "Vowel";
    } else {
        cout << "Consonant";
    }


    return 0;
}

#include <string>
using namespace std;

class Solution {
public:
    string printDayName(int day) {
        switch (day) {
            case 1:
                return "Monday";
            case 2:
                return "Tuesday";
            case 3:
                return "Wednesday";
            case 4:
                return "Thursday";
            case 5:
                return "Friday";
            case 6:
                return "Saturday";
            case 7:
                return "Sunday";
            default:
                return "Invalid Day";
        }
    }
};
#include <iostream>
using namespace std;

int main() {
    int age;
    cin >> age;

    if (age >= 18) {
        cout << "Eligible";
    } else {
        cout << "Not Eligible";
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    if (num % 5 == 0) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {

   char ch;
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        cout << "Uppercase";
    } else if (ch >= 'a' && ch <= 'z') {
        cout << "Lowercase";
    } else {
        cout << "Not an alphabet";
    }


    return 0;
}
#include <iostream>
using namespace std;

int main() {

    char isVowel;
    cin >> isVowel;

    if (isVowel == 'a' || isVowel == 'A' ||
        isVowel == 'e' || isVowel == 'E' ||
        isVowel == 'i' || isVowel == 'I' ||
        isVowel == 'o' || isVowel == 'O' ||
        isVowel == 'u' || isVowel == 'U') {
        cout << "Vowel";
    } else {
        cout << "Consonant";
    }


    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int month;
    cin >> month;

    if (month == 12 || month == 1 || month == 2) {
        cout << "Winter";
    } else if (month >= 3 && month <= 5) {
        cout << "Spring";
    } else if (month >= 6 && month <= 8) {
        cout << "Summer";
    } else if (month >= 9 && month <= 11) {
        cout << "Autumn";
    } else {
        cout << "Invalid Month";
    }


    return 0;
}

     //      cout << "\nEnd of program. All sections and solved problems are above.\n";
     return 0;
}
