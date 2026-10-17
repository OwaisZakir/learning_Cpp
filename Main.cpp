/*
===============================================================================
C++ FUNDAMENTALS + CONTROL FLOW + LOOPS
Organized notes, examples, and solved practice problems
===============================================================================

How to use:
1. Save this file as cpp_fundamentals_control_flow_loops.cpp
2. Compile with C++14 or newer.
3. Run to see the example outputs.
4. For interactive input practice, comment out other demonstration calls in main()
   and uncomment demonstrateInput().

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
10. Input and escape sequences
11. Solved fundamentals problems
12. if / else decision-making
13. Solved control-flow problems
14. for, while, and do-while loops
15. Solved loop problems

This is one complete program with exactly one main() function.
===============================================================================
*/

#include <iostream>
#include <iomanip>
#include <limits>
#include <string>
using namespace std;

// SECTION 1 — VARIABLES AND CONSTANTS
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

    // PI = 3.14; // Error: a const variable cannot be reassigned.
}

// SECTION 2 — DATA TYPES AND sizeof
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

    // sizeof(char) is always 1 byte. Other sizes may vary by implementation.
}

// SECTION 3 — INITIALIZATION
void demonstrateInitialization()
{
    cout << "\n========== 3. INITIALIZATION ==========\n";

    int safeValue{}; // Value-initialized to 0.
    cout << "safeValue = " << safeValue << '\n';

    // Do not read an uninitialized local variable.
}

// SECTION 4 — TYPE CONVERSION AND DIVISION
void demonstrateTypeConversion()
{
    cout << "\n========== 4. TYPE CONVERSION AND DIVISION ==========\n";

    int wholeNumber = 10;
    double convertedDouble = wholeNumber; // Implicit conversion: int to double.
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

// SECTION 5 — CHARACTERS AND CHARACTER CODES
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

// SECTION 6 — NUMBER SYSTEMS
void demonstrateNumberSystems()
{
    cout << "\n========== 6. NUMBER SYSTEMS ==========\n";

    cout << "Decimal 10: " << 10 << '\n';
    cout << "Octal 012: " << 012 << '\n';
    cout << "Binary 0b1010: " << 0b1010 << '\n'; // C++14+
    cout << "Hexadecimal 0xA: " << 0xA << '\n';
}

// SECTION 7 — ARITHMETIC OPERATORS
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

// SECTION 8 — INCREMENT AND DECREMENT
void demonstrateIncrementDecrement()
{
    cout << "\n========== 8. INCREMENT AND DECREMENT ==========\n";

    int x = 5;
    cout << "x++ prints: " << x++ << '\n'; // Prints 5, then x becomes 6.
    cout << "x after x++: " << x << '\n';

    x = 5;
    cout << "++x prints: " << ++x << '\n'; // x becomes 6, then prints 6.

    x = 5;
    cout << "x-- prints: " << x-- << '\n'; // Prints 5, then x becomes 4.
    cout << "x after x--: " << x << '\n';

    x = 5;
    cout << "--x prints: " << --x << '\n'; // x becomes 4, then prints 4.
}

// SECTION 9 — RELATIONAL, ASSIGNMENT, AND LOGICAL OPERATORS
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
    score += 5;
    cout << "Score after += 5: " << score << '\n';
    score -= 2;
    cout << "Score after -= 2: " << score << '\n';

    cout << "(5 > 3) && (8 < 6): " << ((5 > 3) && (8 < 6)) << '\n';
    cout << "(5 > 3) || (8 < 6): " << ((5 > 3) || (8 < 6)) << '\n';
    cout << "!(5 > 3): " << (!(5 > 3)) << '\n' << noboolalpha;
}

// SECTION 10 — INPUT EXAMPLE
void demonstrateInput()
{
    cout << "\n========== 10. INPUT: cin AND getline ==========\n";

    string fullName;
    int age{};

    cout << "Enter your full name: ";
    getline(cin, fullName);
    cout << "Enter your age: ";
    cin >> age;

    cout << "Hello " << fullName << ", you are " << age << " years old.\n";

    // If cin >> number is followed by getline(), discard the leftover line using:
    // cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

// SECTION 11 — ESCAPE SEQUENCES
void demonstrateEscapeSequences()
{
    cout << "\n========== 11. ESCAPE SEQUENCES ==========\n";

    cout << "New line: first line\nsecond line\n";
    cout << "Tab: Column 1\tColumn 2\n";
    cout << "Double quote: \"Hello\"\n";
    cout << "Backslash: \\\n";
}

// SECTION 12 — SOLVED FUNDAMENTALS PROBLEMS
void solvedFundamentalsProblems()
{
    cout << "\n========== 12. SOLVED FUNDAMENTALS PROBLEMS ==========\n";

    {
        int a = 12, b = 8;
        cout << "1. Sum of 12 and 8: " << a + b << '\n';
    }
    {
        double a = 10, b = 15, c = 20;
        cout << "2. Average of 10, 15, 20: " << (a + b + c) / 3.0 << '\n';
    }
    {
        const double PI = 3.14159;
        double radius = 5;
        cout << "3. Circle area (radius 5): " << PI * radius * radius << '\n';
    }
    {
        double celsius = 25;
        double fahrenheit = (celsius * 9.0 / 5.0) + 32;
        cout << "4. 25 C in Fahrenheit: " << fahrenheit << '\n';
    }
    {
        int salary = 50000;
        salary += 5000;
        cout << "5. Salary after increase: Rs. " << salary << '\n';
    }
    {
        int a = 3, b = 9;
        int temp = a;
        a = b;
        b = temp;
        cout << "6. After swapping: a = " << a << ", b = " << b << '\n';
    }
    {
        int length = 8, width = 4;
        cout << "7. Rectangle area: " << length * width << '\n';
        cout << "7. Rectangle perimeter: " << 2 * (length + width) << '\n';
    }
    {
        char character = 'A';
        cout << "8. Code of 'A': " << static_cast<int>(character) << '\n';
    }
    {
        string name = "Harsh";
        int age = 24;
        cout << "9. Hello " << name << ", you are " << age << " years old.\n";
    }
    {
        double bill = 2500.0;
        double discount = bill * 0.10;
        cout << "10. Bill after 10% discount: Rs. " << bill - discount << '\n';
    }
}

// SECTION 13 — IF / ELSE AND DECISION-MAKING
void demonstrateIfElse()
{
    cout << "\n========== 13. IF / ELSE EXAMPLES ==========\n";

    int age = 18;
    if (age >= 18)
        cout << "Age " << age << ": Eligible\n";
    else
        cout << "Age " << age << ": Not eligible\n";

    int number = 0;
    if (number > 0)
        cout << number << " is positive.\n";
    else if (number < 0)
        cout << number << " is negative.\n";
    else
        cout << "Number is zero.\n";
}

// SECTION 14 — SOLVED CONTROL-FLOW PROBLEMS
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
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

double calculateElectricityBill(int units)
{
    // Progressive slab rates from the supplied notes; not an official tariff.
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
        return "Not an alphabet";

    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' ||
        ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' ||
        ch == 'u' || ch == 'U')
        return "Vowel";

    return "Consonant";
}

string printDayName(int day)
{
    switch (day)
    {
        case 1: return "Monday";
        case 2: return "Tuesday";
        case 3: return "Wednesday";
        case 4: return "Thursday";
        case 5: return "Friday";
        case 6: return "Saturday";
        case 7: return "Sunday";
        default: return "Invalid Day";
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
    // This follows the supplied notes' season mapping, not a local climate model.
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

// SECTION 15 — LOOP EXPLANATION AND EXAMPLES
void demonstrateLoops()
{
    cout << "\n========== 15. LOOP EXAMPLES ==========\n";

    cout << "for loop: print Hello 3 times\n";
    for (int i = 0; i < 3; i++)
        cout << "Hello\n";

    cout << "while loop: countdown from 5\n";
    int count = 5;
    while (count >= 1)
    {
        cout << count << ' ';
        --count;
    }
    cout << '\n';

    cout << "do-while loop: runs at least once\n";
    int value = 1;
    do
    {
        cout << "value = " << value << '\n';
        ++value;
    } while (value <= 2);
}

// SECTION 16 — SOLVED LOOP PROBLEMS
long long sumFromOneToN(int n)
{
    long long sum = 0;
    for (int i = 1; i <= n; ++i)
        sum += i;
    return sum;
}

long long factorial(int n)
{
    if (n < 0)
        return -1; // Negative factorial is not defined here.

    long long answer = 1;
    for (int i = 1; i <= n; ++i)
    {
        if (answer > numeric_limits<long long>::max() / i)
            return -1; // Indicates overflow for this return type.
        answer *= i;
    }
    return answer;
}

void printFactors(int n)
{
    if (n <= 0)
    {
        cout << "Factors are shown for positive integers only.";
        return;
    }

    for (int i = 1; i <= n; ++i)
        if (n % i == 0)
            cout << i << ' ';
}

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i <= n / i; ++i)
        if (n % i == 0)
            return false;

    return true;
}

int sumDigits(int n)
{
    if (n < 0)
        n = -n;

    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum; // For input 0, the sum is 0.
}

long long reverseNumber(int n)
{
    long long reversed = 0;
    long long value = n;

    if (value < 0)
        value = -value;

    while (value > 0)
    {
        reversed = reversed * 10 + value % 10;
        value /= 10;
    }

    return (n < 0) ? -reversed : reversed;
}

bool isPalindrome(int n)
{
    if (n < 0)
        return false;

    return static_cast<long long>(n) == reverseNumber(n);
}

void solvedLoopProblems()
{
    cout << "\n========== 16. SOLVED LOOP PROBLEMS ==========\n";

    // Problem 1: Print Hello n times. Example n = 3.
    cout << "1. Print Hello 3 times:\n";
    for (int i = 0; i < 3; ++i)
        cout << "Hello\n";

    // Problem 2: Print from n down to 1.
    cout << "2. Countdown from 5: ";
    for (int i = 5; i >= 1; --i)
        cout << i << ' ';
    cout << '\n';

    // Problem 3: Sum all integers from 1 through n.
    cout << "3. Sum from 1 to 10: " << sumFromOneToN(10) << '\n';

    // Problem 4: Factorial.
    long long fact = factorial(5);
    cout << "4. 5! = ";
    if (fact == -1)
        cout << "Not representable / invalid input\n";
    else
        cout << fact << '\n';

    // Problem 5: Print all factors.
    cout << "5. Factors of 12: ";
    printFactors(12);
    cout << '\n';

    // Problem 6: Prime check.
    cout << "6. Is 29 prime? " << (isPrime(29) ? "Prime" : "Not Prime") << '\n';

    // Problem 7: Sum digits.
    cout << "7. Sum of digits of 582: " << sumDigits(582) << '\n';

    // Problem 8: Reverse a number.
    cout << "8. Reverse of 1234: " << reverseNumber(1234) << '\n';

    // Problem 9: Palindrome check.
    cout << "9. Is 1221 a palindrome? "
         << (isPalindrome(1221) ? "Palindrome" : "Not Palindrome") << '\n';
}

// MAIN — program execution starts here. Keep exactly one main().
int main()
{
    cout << fixed << setprecision(2);
    cout << "C++ FUNDAMENTALS — ORGANIZED NOTES AND SOLUTIONS\n";

    demonstrateVariablesAndConstants();
    demonstrateDataTypes();
    demonstrateInitialization();
    demonstrateTypeConversion();
    demonstrateCharacters();
    demonstrateNumberSystems();
    demonstrateArithmetic();
    demonstrateIncrementDecrement();
    demonstrateOperators();
    demonstrateEscapeSequences();
    solvedFundamentalsProblems();
    demonstrateIfElse();
    solvedControlFlowProblems();
    demonstrateLoops();
    solvedLoopProblems();

    cout << "\nEnd of program. All sections and solved problems displayed.\n";

    // For interactive input practice:
    // 1. Comment out the demonstration calls above.
    // 2. Uncomment the line below.
    // demonstrateInput();

    // Nested loops and do-while/while loop practice can be added here.

    return 0;
}
