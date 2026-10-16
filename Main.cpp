/*
===============================================================================
C++ FUNDAMENTALS + CONTROL FLOW
Organized notes, examples, and solved practice problems
===============================================================================

How to use:
1. Save/open this file as cpp_fundamentals_organized_complete.cpp
2. Compile with C++14 or newer.
3. Run the program to see the examples and solved-problem outputs.
4. Input examples are in a separate function; call it from main() when needed.

Topics:
 1. Variables and constants
 2. Data types and sizeof
 3. Initialization
 4. Type conversion and division
 5. Characters and character codes
 6. Number systems
 7. Arithmetic operators
 8. Increment and decrement
 9. Relational, assignment, and logical operators
10. Input: cin, getline, cin.ignore
11. Escape sequences
12. Solved fundamentals problems
13. if / else and decision-making examples
14. Solved control-flow problems

Note: This is one complete program with one main() function.
===============================================================================
*/

#include <iostream>
#include <iomanip>
#include <limits>
#include <string>
using namespace std;

// -----------------------------------------------------------------------------
// SECTION 1 — VARIABLES AND CONSTANTS
// -----------------------------------------------------------------------------
void demonstrateVariablesAndConstants()
{
     cout << "\n========== 1. VARIABLES AND CONSTANTS ==========\n";

     int pocketMoney = 2000;
     int tuitionFee = 500;
     int balance = pocketMoney - tuitionFee;
     const double PI = 3.14159;

     cout << "Pocket money: Rs. " << pocketMoney << '\n';
     cout << "Tuition fee:  Rs. " << tuitionFee << '\n';
     cout << "Balance:      Rs. " << balance << '\n';
     cout << "PI: " << PI << '\n';

     // PI = 3.14; // ERROR: a const variable cannot be reassigned.
}

// -----------------------------------------------------------------------------
// SECTION 2 — DATA TYPES AND sizeof
// sizeof(char) is always 1 byte. Other sizes can vary by implementation.
// -----------------------------------------------------------------------------
void demonstrateDataTypes()
{
     cout << "\n========== 2. DATA TYPES AND sizeof ==========\n";

     int age = 20;
     float height = 5.9f;
     double weight = 70.5;
     char grade = 'A';
     bool passed = true;

     cout << "int age: " << age << " | bytes: " << sizeof(age) << '\n';
     cout << "float height: " << height << " | bytes: " << sizeof(height) << '\n';
     cout << "double weight: " << weight << " | bytes: " << sizeof(weight) << '\n';
     cout << "char grade: " << grade << " | bytes: " << sizeof(grade) << '\n';
     cout << boolalpha << "bool passed: " << passed
          << " | bytes: " << sizeof(passed) << '\n'
          << noboolalpha;
}

// -----------------------------------------------------------------------------
// SECTION 3 — INITIALIZATION
// -----------------------------------------------------------------------------
void demonstrateInitialization()
{
     cout << "\n========== 3. INITIALIZATION ==========\n";

     int safeValue{}; // Value-initialized to 0.
     cout << "safeValue = " << safeValue << '\n';

     // int uninitializedValue;
     // Reading an uninitialized local int is unsafe; do not print it.
}

// -----------------------------------------------------------------------------
// SECTION 4 — TYPE CONVERSION AND DIVISION
// -----------------------------------------------------------------------------
void demonstrateTypeConversion()
{
     cout << "\n========== 4. TYPE CONVERSION AND DIVISION ==========\n";

     int wholeNumber = 10;
     double convertedDouble = wholeNumber; // Implicit conversion: int -> double.

     double decimalNumber = 10.75;
     int truncatedNumber = static_cast<int>(decimalNumber); // Fraction is removed.

     int numerator = 10;
     int denominator = 3;

     cout << "int to double: " << convertedDouble << '\n';
     cout << "10.75 converted to int: " << truncatedNumber << " (not rounded)\n";
     cout << "Integer division 10 / 3: " << numerator / denominator << '\n';
     cout << "Floating division 10 / 3: "
          << static_cast<double>(numerator) / denominator << '\n';
}

// -----------------------------------------------------------------------------
// SECTION 5 — CHARACTERS AND CHARACTER CODES
// Listed numeric codes apply to ASCII-compatible execution character sets.
// -----------------------------------------------------------------------------
void demonstrateCharacters()
{
     cout << "\n========== 5. CHARACTERS AND CHARACTER CODES ==========\n";

     char letter = 'A';
     cout << "Character: " << letter << '\n';
     cout << "Code of 'A': " << static_cast<int>(letter) << '\n';
     cout << "Number 1: " << 1 << '\n';
     cout << "Character '1': " << '1' << '\n';
     cout << "Code of character '1': " << static_cast<int>('1') << '\n';
     cout << "ASCII-compatible codes: '0'=48, '1'=49, 'A'=65, 'a'=97\n";
}

// -----------------------------------------------------------------------------
// SECTION 6 — NUMBER SYSTEMS
// Decimal 10, octal 012, binary 0b1010 (C++14+), and hex 0xA all mean 10.
// -----------------------------------------------------------------------------
void demonstrateNumberSystems()
{
     cout << "\n========== 6. NUMBER SYSTEMS ==========\n";
     cout << "Decimal 10: " << 10 << '\n';
     cout << "Octal 012: " << 012 << '\n';
     cout << "Binary 0b1010: " << 0b1010 << '\n';
     cout << "Hexadecimal 0xA: " << 0xA << '\n';
}

// -----------------------------------------------------------------------------
// SECTION 7 — ARITHMETIC OPERATORS
// -----------------------------------------------------------------------------
void demonstrateArithmetic()
{
     cout << "\n========== 7. ARITHMETIC OPERATORS ==========\n";

     int a = 20;
     int b = 6;

     cout << "Addition:       " << a + b << '\n';
     cout << "Subtraction:    " << a - b << '\n';
     cout << "Multiplication: " << a * b << '\n';
     cout << "Integer divide: " << a / b << '\n';
     cout << "Remainder:      " << a % b << '\n';
}

// -----------------------------------------------------------------------------
// SECTION 8 — INCREMENT AND DECREMENT
// Postfix uses the old value, then updates. Prefix updates first.
// -----------------------------------------------------------------------------
void demonstrateIncrementDecrement()
{
     cout << "\n========== 8. INCREMENT AND DECREMENT ==========\n";

     int x = 5;
     cout << "x++ prints: " << x++ << '\n';
     cout << "x after x++: " << x << '\n';

     x = 5;
     cout << "++x prints: " << ++x << '\n';

     x = 5;
     cout << "x-- prints: " << x-- << '\n';
     cout << "x after x--: " << x << '\n';

     x = 5;
     cout << "--x prints: " << --x << '\n';
}

// -----------------------------------------------------------------------------
// SECTION 9 — RELATIONAL, ASSIGNMENT, AND LOGICAL OPERATORS
// -----------------------------------------------------------------------------
void demonstrateOperators()
{
     cout << "\n========== 9. OTHER OPERATORS ==========\n";

     int first = 2;
     int second = 4;
     cout << boolalpha;
     cout << "2 < 4:  " << (first < second) << '\n';
     cout << "2 > 4:  " << (first > second) << '\n';
     cout << "2 == 4: " << (first == second) << '\n';
     cout << "2 != 4: " << (first != second) << '\n';
     cout << "2 <= 4: " << (first <= second) << '\n';
     cout << "2 >= 4: " << (first >= second) << '\n';

     int score = 10;
     score += 5; // Same as score = score + 5.
     cout << "Score after += 5: " << score << '\n';
     score -= 2;
     cout << "Score after -= 2: " << score << '\n';

     cout << "(5 > 3) && (8 < 6): " << ((5 > 3) && (8 < 6)) << '\n';
     cout << "(5 > 3) || (8 < 6): " << ((5 > 3) || (8 < 6)) << '\n';
     cout << "!(5 > 3): " << (!(5 > 3)) << '\n'
          << noboolalpha;
}

// -----------------------------------------------------------------------------
// SECTION 10 — INPUT EXAMPLE
// Call this function separately when you want to practise input.
// cin >> name reads one word; getline reads a complete line.
// -----------------------------------------------------------------------------
void demonstrateInput()
{
     cout << "\n========== 10. INPUT: cin AND getline ==========\n";

     string fullName;
     int age;

     cout << "Enter your full name: ";
     getline(cin, fullName);

     cout << "Enter your age: ";
     cin >> age;

     cout << "Hello " << fullName << ", you are " << age << " years old.\n";
}

// If using cin >> number before getline(), discard the leftover line with:
// cin.ignore(numeric_limits<streamsize>::max(), '\n');

// -----------------------------------------------------------------------------
// SECTION 11 — ESCAPE SEQUENCES
// -----------------------------------------------------------------------------
void demonstrateEscapeSequences()
{
     cout << "\n========== 11. ESCAPE SEQUENCES ==========\n";
     cout << "New line: first line\nsecond line\n";
     cout << "Tab: Column 1\tColumn 2\n";
     cout << "Double quote: \"Hello\"\n";
     cout << "\\n makes a new line; \\t makes a tab.\n";
}

// -----------------------------------------------------------------------------
// SECTION 12 — SOLVED FUNDAMENTALS PROBLEMS
// These examples use sample values so the full program runs without input.
// -----------------------------------------------------------------------------
void solvedFundamentalsProblems()
{
     cout << "\n========== 12. SOLVED FUNDAMENTALS PROBLEMS ==========\n";

     // Problem 1: Add two numbers.
     {
          int a = 12, b = 8;
          cout << "1. Sum of 12 and 8: " << a + b << '\n';
     }

     // Problem 2: Average of three numbers.
     {
          double a = 10, b = 15, c = 20;
          cout << "2. Average of 10, 15, 20: " << (a + b + c) / 3.0 << '\n';
     }

     // Problem 3: Area of a circle: area = PI * radius * radius.
     {
          const double PI = 3.14159;
          double radius = 5;
          cout << "3. Circle area (radius 5): " << PI * radius * radius << '\n';
     }

     // Problem 4: Celsius to Fahrenheit: F = (C * 9 / 5) + 32.
     {
          double celsius = 25;
          double fahrenheit = (celsius * 9.0 / 5.0) + 32;
          cout << "4. 25 C in Fahrenheit: " << fahrenheit << '\n';
     }

     // Problem 5: Increase salary by Rs. 5000 using +=.
     {
          int salary = 50000;
          salary += 5000;
          cout << "5. Salary after increase: Rs. " << salary << '\n';
     }

     // Problem 6: Swap two values using a temporary variable.
     {
          int a = 3, b = 9;
          int temp = a;
          a = b;
          b = temp;
          cout << "6. After swapping: a = " << a << ", b = " << b << '\n';
     }

     // Problem 7: Rectangle area and perimeter.
     {
          int length = 8, width = 4;
          cout << "7. Rectangle area: " << length * width << '\n';
          cout << "7. Rectangle perimeter: " << 2 * (length + width) << '\n';
     }

     // Problem 8: Print the character code for 'A'.
     {
          char character = 'A';
          cout << "8. Code of 'A': " << static_cast<int>(character) << '\n';
     }

     // Problem 9: Greeting from a name and age.
     {
          string name = "Harsh";
          int age = 24;
          cout << "9. Hello " << name << ", you are " << age << " years old.\n";
     }

     // Problem 10: Bill after a 10% discount.
     {
          double bill = 2500.0;
          double discount = bill * 0.10;
          cout << "10. Bill after 10% discount: Rs. " << bill - discount << '\n';
     }
}

// -----------------------------------------------------------------------------
// SECTION 13 — IF / ELSE AND DECISION-MAKING
// -----------------------------------------------------------------------------
void demonstrateIfElse()
{
     cout << "\n========== 13. IF / ELSE EXAMPLES ==========\n";

     int age = 18;
     if (age >= 18)
     {
          cout << "Age " << age << ": Eligible / Valid\n";
     }
     else
     {
          cout << "Age " << age << ": Not eligible / Invalid\n";
     }

     int number = 0;
     if (number > 0)
     {
          cout << number << " is positive.\n";
     }
     else if (number < 0)
     {
          cout << number << " is negative.\n";
     }
     else
     {
          cout << "Number is zero.\n";
     }
}

// -----------------------------------------------------------------------------
// SECTION 14 — SOLVED CONTROL-FLOW PROBLEMS
// -----------------------------------------------------------------------------
int findLarger(int a, int b)
{
     return (a > b) ? a : b;
}

string checkEvenOdd(int number)
{
     return (number % 2 == 0) ? "Even" : "Odd";
}

string checkNumberSign(int number)
{
     if (number > 0)
          return "Positive";
     if (number < 0)
          return "Negative";
     return "Zero";
}

bool isLeapYear(int year)
{
     // Leap year if divisible by 400, or divisible by 4 but not by 100.
     return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

double calculateElectricityBill(int units)
{
     // Slab rates from the supplied notes; assumes progressive/slab billing.
     if (units <= 0)
          return 0.0;
     if (units <= 100)
          return units * 4.2;
     if (units <= 200)
          return (100 * 4.2) + ((units - 100) * 6.0);
     if (units <= 400)
          return (100 * 4.2) + (100 * 6.0) + ((units - 200) * 8.0);
     return (100 * 4.2) + (100 * 6.0) + (200 * 8.0) + ((units - 400) * 13.0);
}

double priceAfterDiscount(double amount)
{
     double discountPercent;
     if (amount < 1000)
          discountPercent = 0;
     else if (amount < 5000)
          discountPercent = 10;
     else if (amount < 10000)
          discountPercent = 20;
     else
          discountPercent = 30;
     return amount - (amount * discountPercent / 100.0);
}

string checkVowelOrConsonant(char ch)
{
     if (!((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')))
     {
          return "Not an alphabet";
     }

     if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' ||
         ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' ||
         ch == 'u' || ch == 'U')
     {
          return "Vowel";
     }
     return "Consonant";
}

string printDayName(int day)
{
     switch (day)
     {
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

string checkAgeEligibility(int age)
{
     return (age >= 18) ? "Eligible" : "Not Eligible";
}

string divisibleByFive(int number)
{
     return (number % 5 == 0) ? "Yes" : "No";
}

string checkLetterCase(char ch)
{
     if (ch >= 'A' && ch <= 'Z')
          return "Uppercase";
     if (ch >= 'a' && ch <= 'z')
          return "Lowercase";
     return "Not an alphabet";
}

string seasonForMonth(int month)
{
     // Seasons follow the supplied notes, not a location-specific climate model.
     if (month == 12 || month == 1 || month == 2)
          return "Winter";
     if (month >= 3 && month <= 5)
          return "Spring";
     if (month >= 6 && month <= 8)
          return "Summer";
     if (month >= 9 && month <= 11)
          return "Autumn";
     return "Invalid Month";
}

void solvedControlFlowProblems()
{
     cout << "\n========== 14. SOLVED CONTROL-FLOW PROBLEMS ==========\n";

     cout << "1. Larger of 12 and 8: " << findLarger(12, 8) << '\n';
     cout << "2. 7 is: " << checkEvenOdd(7) << '\n';
     cout << "3. -4 is: " << checkNumberSign(-4) << '\n';
     cout << "4. Year 2024: " << (isLeapYear(2024) ? "Leap Year" : "Not a Leap Year") << '\n';
     cout << "5. Bill for 250 units: Rs. " << calculateElectricityBill(250) << '\n';
     cout << "6. Price for Rs. 6000 after discount: Rs. " << priceAfterDiscount(6000) << '\n';
     cout << "7. Character 'E': " << checkVowelOrConsonant('E') << '\n';
     cout << "8. Day 3: " << printDayName(3) << '\n';
     cout << "9. Age 19: " << checkAgeEligibility(19) << '\n';
     cout << "10. Is 35 divisible by 5? " << divisibleByFive(35) << '\n';
     cout << "11. Character 'G': " << checkLetterCase('G') << '\n';
     cout << "12. Month 7: " << seasonForMonth(7) << '\n';
}

// -----------------------------------------------------------------------------
// MAIN — the program starts here. Only one main() is needed.
// -----------------------------------------------------------------------------
int main()
{
     //     cout << fixed << setprecision(2);
     //     cout << "C++ FUNDAMENTALS — ORGANIZED NOTES AND SOLUTIONS\n";

     //     demonstrateVariablesAndConstants();
     //     demonstrateDataTypes();
     //     demonstrateInitialization();
     //     demonstrateTypeConversion();
     //     demonstrateCharacters();
     //     demonstrateNumberSystems();
     //     demonstrateArithmetic();
     //     demonstrateIncrementDecrement();
     //     demonstrateOperators();
     //     demonstrateEscapeSequences();
     //     solvedFundamentalsProblems();
     //     demonstrateIfElse();
     //     solvedControlFlowProblems();

     // To practise interactive input, uncomment the next line and run again.
     // demonstrateInput();

     //     cout << "\nEnd of program. All examples and solutions have been displayed.\n";

     // 2 Types Of Loops Are their
     // Entering Loops
     // Exeting Loops
     // for , while , do - while

//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         cout << "Hello" << endl;
//     }


#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Hello" << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

        for (int i = n; i >= 1; i-- ) {
            cout << i << " " ;
            }

 return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    int count =  0;
    cin >> n;
    for(int i = 0; i <= n ; i++){
        count += i;
    }

    cout << count; 
    return 0;
}

#include <iostream>
using namespace std;

void factorial(int n) {
    long long answer = 1;
    
    for (int i = 1; i <= n; i++) {
        answer = answer * i;
    }
    
    cout << answer;
}
#include <iostream>
using namespace std;

void printAllFactor(int n) {
  
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
}
#include <iostream>
using namespace std;

class Solution {
public:
    void checkPrime(int n) {
        if (n <= 1) {
            cout << "Not Prime";
            return;
        }

        int count = 0;
        
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                count++;
            }
        }
        
        
        if (count == 2) {
            cout << "Prime";
        } else {
            cout << "Not Prime";
        }
    }
};

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int sum = 0;
    
    
    while (n > 0) {
        int lastDigit = n % 10; 
        sum += lastDigit;         
        n = n / 10;               
    }
    
    cout << sum;
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverseNumber(int n) {
        int reversed = 0;
        
        while (n > 0) {
            int lastDigit = n % 10;          

            reversed = reversed * 10 + lastDigit; 
            
            n = n / 10;     
        }
        
        return reversed;
    }
};
#include <iostream>
using namespace std;

void checkPalindrome(int n) {
    if (n < 0) {
        cout << "Not Palindrome";
        return;
    }

    int original = n;
    long long reversed = 0;
    
    while (n > 0) {
        int lastDigit = n % 10;
        reversed = reversed * 10 + lastDigit;
        n = n / 10;
    }
    
    if (original == reversed) {
        cout << "Palindrome";
    } else {
        cout << "Not Palindrome";
    }
}
    return 0;
}

