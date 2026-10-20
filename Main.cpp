
#include <iostream>
#include <iomanip>
#include <limits>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <climits>

using namespace std;

// Beginner's guide: each section below focuses on one C++ idea.
// Read the notes, predict the printed result, then run that section's
// demonstrate... function to compare your prediction with the output.

// 1. Variables and Constants
// A variable is a named place for a value that may change.
// A const variable is fixed after initialization. Example: 2000 - 500 = 1500.
void demonstrateVariables()
{
    cout << "\n=== VARIABLES AND CONSTANTS ===\n";

    int pocketMoney = 2000;
    int tuitionFee = 500;
    const double PI = 3.14159;

    cout << "Pocket Money: " << pocketMoney << '\n';
    cout << "Tuition Fee: " << tuitionFee << '\n';
    cout << "Balance: " << pocketMoney - tuitionFee << '\n';
    cout << "PI: " << PI << '\n';
}

// 2. Data Types
// Types describe what kind of value a variable can hold:
// int for whole numbers, float/double for decimals, char for one character,
// and bool for true/false. The f suffix makes 5.9f a float literal.
// boolalpha prints true/false as words; sizeof reports storage size in bytes.
void demonstrateDataTypes()
{
    cout << "\n=== DATA TYPES ===\n";

    int age = 20;
    float height = 5.9f;
    double weight = 70.5;
    char grade = 'A';
    bool passed = true;

    cout << "Age: " << age << '\n';
    cout << "Height: " << height << '\n';
    cout << "Weight: " << weight << '\n';
    cout << "Grade: " << grade << '\n';
    cout << boolalpha << "Passed: " << passed << '\n';
    cout << "Size of int: " << sizeof(age) << " bytes\n";
    cout << noboolalpha;
}

// 3. Initialization
// Initialization gives a variable its first value. Empty braces are a safe
// default: number and decimal become 0, and name becomes an empty string.
// Prefer initialized variables so you never accidentally use an unknown value.
void demonstrateInitialization()
{
    cout << "\n=== INITIALIZATION ===\n";

    int number{};
    double decimal{};
    string name{};

    cout << "Number: " << number << '\n';
    cout << "Decimal: " << decimal << '\n';
    cout << "Name: " << name << '\n';
}

// 4. Type Conversion
// A value can be converted from one type to another. int-to-double conversion
// preserves the value; static_cast<int>(10.75) becomes 10 (truncation, not rounding).
// Integer division 10 / 3 is 3; converting before division gives about 3.333.
void demonstrateTypeConversion()
{
    cout << "\n=== TYPE CONVERSION ===\n";

    int number = 10;
    double converted = number;

    double decimal = 10.75;
    int truncated = static_cast<int>(decimal);

    cout << "Converted: " << converted << '\n';
    cout << "Truncated: " << truncated << '\n';
    cout << "Integer Division: " << 10 / 3 << '\n';
    cout << "Floating Division: "
         << static_cast<double>(10) / 3 << '\n';
}

// 5. Characters
// A char stores one character, written in single quotes. '1' is a character,
// not the integer 1. Casting a char to int displays its execution character code.
void demonstrateCharacters()
{
    cout << "\n=== CHARACTERS ===\n";

    char ch = 'A';

    cout << "Character: " << ch << '\n';
    cout << "Character code: " << static_cast<int>(ch) << '\n';
    cout << "Code of digit 1: "
         << static_cast<int>('1') << '\n';
}

// 6. Number Systems
// These four literals have the same value: decimal 10, octal 012,
// binary 0b1010, and hexadecimal 0xA. In C++, a leading zero means octal.
void demonstrateNumberSystems()
{
    cout << "\n=== NUMBER SYSTEMS ===\n";

    cout << "Decimal: " << 10 << '\n';
    cout << "Octal: " << 012 << '\n';
    cout << "Binary: " << 0b1010 << '\n';
    cout << "Hexadecimal: " << 0xA << '\n';
}

// 7. Arithmetic Operators
// + adds, - subtracts, * multiplies, / divides, and % gives the remainder.
// With a=20 and b=6: 20/6 is 3 because both operands are integers; 20%6 is 2.
void demonstrateArithmetic()
{
    cout << "\n=== ARITHMETIC OPERATORS ===\n";

    int a = 20, b = 6;

    cout << "Addition: " << a + b << '\n';
    cout << "Subtraction: " << a - b << '\n';
    cout << "Multiplication: " << a * b << '\n';
    cout << "Division: " << a / b << '\n';
    cout << "Remainder: " << a % b << '\n';
}

// 8. Increment and Decrement
// ++ adds one and -- subtracts one. Postfix x++ uses the old value in the
// expression, then changes x; prefix ++x changes x first, then uses the new value.
// Starting at 5, cout << x++ prints 5 and leaves x equal to 6.
void demonstrateIncrementDecrement()
{
    cout << "\n=== INCREMENT AND DECREMENT ===\n";

    int x = 5;

    cout << "x++: " << x++ << '\n';
    cout << "After x++: " << x << '\n';

    x = 5;
    cout << "++x: " << ++x << '\n';

    x = 5;
    cout << "x--: " << x-- << '\n';
    cout << "--x: " << --x << '\n';
}

// 9. Relational and Logical Operators
// Comparisons such as <, >, ==, and != produce a bool. && means both conditions
// must be true; || means at least one is true. += and -= update a variable:
// score=10; score+=5; score-=2 leaves score equal to 13.
void demonstrateOperators()
{
    cout << "\n=== OTHER OPERATORS ===\n";

    int a = 2, b = 4;

    cout << boolalpha;
    cout << "a < b: " << (a < b) << '\n';
    cout << "a > b: " << (a > b) << '\n';
    cout << "a == b: " << (a == b) << '\n';
    cout << "a != b: " << (a != b) << '\n';
    cout << "(5>3)&&(8<6): " << ((5 > 3) && (8 < 6)) << '\n';
    cout << "(5>3)||(8<6): " << ((5 > 3) || (8 < 6)) << '\n';
    cout << noboolalpha;

    int score = 10;
    score += 5;
    score -= 2;

    cout << "Updated score: " << score << '\n';
}

// 10. Input
// getline reads a whole line, including spaces; >> reads a formatted value such
// as an integer. Always check the input operation: entering "twenty" for age
// makes cin >> age fail, so this example prints an error instead of using age.
void demonstrateInput()
{
    cout << "\n=== INPUT ===\n";

    string name;
    int age{};

    cout << "Enter your full name: ";
    getline(cin, name);

    cout << "Enter your age: ";

    if (!(cin >> age))
    {
        cout << "Invalid input.\n";
        return;
    }

    cout << "Hello " << name << ", age " << age << '\n';
}

// 11. Escape Sequences
// A backslash starts an escape sequence: \n is a new line, \t is a tab,
// \" prints a quote, and \\ prints one literal backslash.
void demonstrateEscapeSequences()
{
    cout << "\n=== ESCAPE SEQUENCES ===\n";

    cout << "First line\nSecond line\n";
    cout << "Column 1\tColumn 2\n";
    cout << "Quote: \"Hello\"\n";
    cout << "Backslash: \\\n";
}

// 12. Fundamentals Problems
// Worked examples combine basic expressions: average=(10+15+20)/3.0 keeps the
// fractional part; circle area is PI*r*r; Celsius-to-Fahrenheit is C*9/5+32.
// For C=25 the result is 77. A 10% discount on 2500 leaves 2250.
void solvedFundamentalsProblems()
{
    cout << "\n=== FUNDAMENTALS PROBLEMS ===\n";

    cout << "Sum: " << 12 + 8 << '\n';
    cout << "Average: " << (10 + 15 + 20) / 3.0 << '\n';

    const double PI = 3.14159;
    int radius = 5;

    cout << "Circle area: " << PI * radius * radius << '\n';

    double celsius = 25;
    cout << "Fahrenheit: "
         << celsius * 9.0 / 5.0 + 32 << '\n';

    int salary = 50000;
    salary += 5000;
    cout << "Salary: " << salary << '\n';

    int a = 3, b = 9;
    swap(a, b);
    cout << "Swapped: " << a << " " << b << '\n';

    cout << "Rectangle area: " << 8 * 4 << '\n';
    cout << "Character code: " << static_cast<int>('A') << '\n';

    double bill = 2500;
    cout << "After discount: " << bill * 0.90 << '\n';
}
// 13. If / Else
// if runs code when its condition is true; else handles the other case.
// else-if lets us test more than two cases. With age=18 the first condition
// passes; with number=-5 the negative branch runs.
void demonstrateIfElse()
{
    cout << "\n=== IF ELSE ===\n";

    int age = 18;
    int number = -5;

    if (age >= 18)
        cout << "Eligible\n";
    else
        cout << "Not eligible\n";

    if (number > 0)
        cout << "Positive\n";
    else if (number < 0)
        cout << "Negative\n";
    else
        cout << "Zero\n";
}

// The ?: conditional operator is a compact expression-form if/else.
// Example: findLarger(12, 8) returns 12.
int findLarger(int a, int b)
{
    return (a > b) ? a : b;
}

// An integer is even when division by 2 leaves remainder 0; otherwise it is odd.
// Example: checkEvenOdd(7) returns "Odd".
string checkEvenOdd(int n)
{
    return n % 2 == 0 ? "Even" : "Odd";
}

// Check positive and negative first; if neither condition is true, the value is 0.
// Examples: checkNumberSign(-4) returns "Negative"; checkNumberSign(0) returns "Zero".
string checkNumberSign(int n)
{
    if (n > 0)
        return "Positive";
    if (n < 0)
        return "Negative";
    return "Zero";
}

// A leap year is divisible by 400, or divisible by 4 but not by 100.
// Examples: 2024 and 2000 are leap years; 1900 is not.
bool isLeapYear(int year)
{
    return year % 400 == 0 ||
           (year % 4 == 0 && year % 100 != 0);
}

// This sample bill uses progressive tiers: each block of units has its own rate.
// For 250 units the calculation is 100*4.2 + 100*6.0 + 50*8.0 = 1020.
// Non-positive input returns 0; the rates are only an example, not a real tariff.
double calculateElectricityBill(int units)
{
    if (units <= 0)
        return 0.0;
    if (units <= 100)
        return units * 4.2;

    if (units <= 200)
        return 100 * 4.2 + (units - 100) * 6.0;

    if (units <= 400)
        return 100 * 4.2 + 100 * 6.0 + (units - 200) * 8.0;

    return 100 * 4.2 + 100 * 6.0 + 200 * 8.0 + (units - 400) * 13.0;
}

// Choose a discount based on the largest threshold reached, then subtract it.
// Example: 6000 reaches the 20% tier, so 6000 - 1200 = 4800.
double priceAfterDiscount(double amount)
{
    double discount = 0;

    if (amount >= 10000)
        discount = 30;
    else if (amount >= 5000)
        discount = 20;
    else if (amount >= 1000)
        discount = 10;

    return amount - amount * discount / 100.0;
}

// First reject characters outside the English letter ranges. Then check whether
// the letter is one of a/e/i/o/u in either case. Examples: 'E' -> Vowel,
// 'G' -> Consonant, and '7' -> Not an alphabet.
string checkVowelOrConsonant(char ch)
{
    if (!((ch >= 'A' && ch <= 'Z') ||
          (ch >= 'a' && ch <= 'z')))
        return "Not an alphabet";

    if (ch == 'a' || ch == 'A' ||
        ch == 'e' || ch == 'E' ||
        ch == 'i' || ch == 'I' ||
        ch == 'o' || ch == 'O' ||
        ch == 'u' || ch == 'U')
        return "Vowel";

    return "Consonant";
}

// switch is useful for matching one value against several exact options.
// Here 1 means Monday and 7 means Sunday; all other numbers are rejected.
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

// These small checks reuse comparison and remainder operators.
// Example: age 19 is eligible; 35 % 5 is 0, so 35 is divisible by five.
string checkAgeEligibility(int age)
{
    return age >= 18 ? "Eligible" : "Not Eligible";
}

string divisibleByFive(int n)
{
    return n % 5 == 0 ? "Yes" : "No";
}

// Check whether a letter lies in the uppercase or lowercase English range.
// A digit or punctuation mark matches neither range.
string checkLetterCase(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        return "Uppercase";
    if (ch >= 'a' && ch <= 'z')
        return "Lowercase";
    return "Not an alphabet";
}

// Group month numbers into seasons; winter wraps around the end of the year.
// Examples: 1 -> Winter, 7 -> Summer, and 13 -> Invalid Month.
string seasonForMonth(int month)
{
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

// 14. Solved Control-Flow Problems
// This section calls the helpers with sample inputs so you can see their results.
// Change an argument, predict the answer, then run again to practice tracing logic.
void solvedControlFlowProblems()
{
    cout << "\n=== CONTROL-FLOW PROBLEMS ===\n";

    cout << "Larger: " << findLarger(12, 8) << '\n';
    cout << "7 is " << checkEvenOdd(7) << '\n';
    cout << "-4 is " << checkNumberSign(-4) << '\n';

    cout << "2024: "
         << (isLeapYear(2024) ? "Leap Year" : "Not Leap Year")
         << '\n';

    cout << fixed << setprecision(2);

    cout << "Electricity bill: "
         << calculateElectricityBill(250) << '\n';

    cout << "Discounted price: "
         << priceAfterDiscount(6000) << '\n';

    cout << "E: " << checkVowelOrConsonant('E') << '\n';
    cout << "Day 3: " << printDayName(3) << '\n';
    cout << "Age 19: " << checkAgeEligibility(19) << '\n';
    cout << "35 divisible by 5: " << divisibleByFive(35) << '\n';
    cout << "G: " << checkLetterCase('G') << '\n';
    cout << "Month 7: " << seasonForMonth(7) << '\n';

    cout << defaultfloat;
}

// 15. Loops
// for is convenient when the repetition count is known; while checks its
// condition before each repetition; do/while always runs at least once.
// Here for prints 3 greetings, while counts down from 5, and do/while prints 1, 2.
void demonstrateLoops()
{
    cout << "\n=== LOOPS ===\n";

    for (int i = 0; i < 3; ++i)
        cout << "Hello\n";

    int count = 5;

    while (count >= 1)
        cout << count-- << ' ';

    cout << '\n';

    int value = 1;

    do
    {
        cout << value << '\n';
        ++value;
    } while (value <= 2);
}

// 16. Loop Problems
// Add each integer from 1 through n. Non-positive n has no terms, so the sum is 0.
// Example: sumFromOneToN(4) calculates 1+2+3+4 and returns 10.
long long sumFromOneToN(int n)
{
    if (n <= 0)
        return 0;

    long long sum = 0;

    for (int i = 1; i <= n; ++i)
        sum += i;

    return sum;
}

// Factorial n! is 1*2*...*n; 0! is 1. Negative input is invalid here.
// The function returns -1 for invalid input or overflow. Before multiplying,
// it checks whether the product would exceed long long's maximum value.
long long factorial(int n)
{
    if (n < 0)
        return -1;

    long long answer = 1;

    for (int i = 1; i <= n; ++i)
    {
        if (answer > numeric_limits<long long>::max() / i)
            return -1;

        answer *= i;
    }

    return answer;
}

// A factor divides a number with no remainder. For 12, the factors are
// 1, 2, 3, 4, 6, and 12. This beginner version checks every candidate up to n.
void printFactors(int n)
{
    if (n <= 0)
    {
        cout << "Positive integers only";
        return;
    }

    for (int i = 1; i <= n; ++i)
        if (n % i == 0)
            cout << i << ' ';
}

// A prime number is greater than 1 and has no divisors except 1 and itself.
// Testing only through sqrt(n) is enough: factors come in pairs.
// The condition i <= n/i avoids calculating i*i, which could overflow.
// Examples: 29 is prime; 21 is not (21 % 3 == 0).
bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i <= n / i; ++i)
        if (n % i == 0)
            return false;

    return true;
}

// Take the last digit with % 10 and remove it with / 10, repeating until empty.
// Example: 582 gives 2+8+5 = 15. The wider temporary safely handles INT_MIN.
int sumDigits(int n)
{
    long long value = n;

    if (value < 0)
        value = -value;

    int sum = 0;

    while (value > 0)
    {
        sum += static_cast<int>(value % 10);
        value /= 10;
    }

    return sum;
}

// Build a reversed number by appending its last digit each time.
// Example: 1234 becomes 4321; reversing 120 gives 21 because integers do not
// preserve leading zeroes. A negative input keeps its sign.
long long reverseNumber(int n)
{
    long long value = n;
    bool negative = value < 0;

    if (negative)
        value = -value;

    long long reversed = 0;

    while (value > 0)
    {
        reversed = reversed * 10 + value % 10;
        value /= 10;
    }

    return negative ? -reversed : reversed;
}

// A palindrome reads the same in either direction. Negative values are false
// in this example. Examples: 1221 -> true, 123 -> false.
bool isPalindrome(int n)
{
    if (n < 0)
        return false;
    return static_cast<long long>(n) == reverseNumber(n);
}

// Sample calls for the loop helpers. Try changing 10, 5, 12, 29, 582, or 1234
// and predict each result before running the program.
void solvedLoopProblems()
{
    cout << "\n=== LOOP PROBLEMS ===\n";

    cout << "Sum 1 to 10: " << sumFromOneToN(10) << '\n';
    cout << "Factorial 5: " << factorial(5) << '\n';

    cout << "Factors of 12: ";
    printFactors(12);
    cout << '\n';

    cout << "29 prime? " << (isPrime(29) ? "Yes" : "No") << '\n';
    cout << "Digit sum of 582: " << sumDigits(582) << '\n';
    cout << "Reverse 1234: " << reverseNumber(1234) << '\n';

    cout << "1221 palindrome? "
         << (isPalindrome(1221) ? "Yes" : "No") << '\n';
}

// 17. Functions
// A function packages reusable work. A declaration gives its name and signature
// before its definition; a call executes it. The declaration below allows code
// to refer to printHelloWithDeclaration before its body appears.
void printHelloWithDeclaration();

void printHello()
{
    cout << "Hello from a function!\n";
}

void printHelloWithDeclaration()
{
    cout << "Declared and defined function!\n";
}

void demonstrateFunctions()
{
    cout << "\n=== FUNCTIONS ===\n";
    printHello();
    printHelloWithDeclaration();
}
// 18. Linear Search
// Linear search checks values from left to right and returns the first matching
// index. It returns -1 when not found. Example: 70 is at index 3 in this array.
// It works on unsorted data and may check every element: O(n) time.
int searchLinear(int arr[], int n, int target)
{
    for (int i = 0; i < n; ++i)
        if (arr[i] == target)
            return i;

    return -1;
}

void demonstrateLinearSearch()
{
    cout << "\n=== LINEAR SEARCH ===\n";

    int arr[] = {10, 23, 45, 70, 11, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Index: " << searchLinear(arr, n, 70) << '\n';
}
// 19. Binary Search
// Binary search halves the remaining range after each comparison, taking O(log n)
// time. Its required condition is that the input is sorted.
// Example: 23 is at index 5 in the sorted sample; an unsorted array can give a wrong answer.
int searchBinary(int arr[], int n, int target)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

void demonstrateBinarySearch()
{
    cout << "\n=== BINARY SEARCH ===\n";

    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Index: " << searchBinary(arr, n, 23) << '\n';
}

// 20. Bubble Sort
// Compare neighboring values and swap them when they are in the wrong order.
// Each pass moves a large value toward the end; if no swap occurs, sorting is done.
// Example: {3,1,2} becomes {1,2,3}. This simple algorithm is generally O(n^2).
void demonstrateBubbleSort()
{
    cout << "\n=== BUBBLE SORT ===\n";

    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};

    for (int i = 0; i < static_cast<int>(arr.size()) - 1; ++i)
    {
        bool swapped = false;

        for (int j = 0;
             j < static_cast<int>(arr.size()) - i - 1;
             ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped)
            break;
    }

    for (int value : arr)
        cout << value << ' ';

    cout << '\n';
}

// 21. Right Rotation
// A right rotation moves the last k items to the front.
// Example: {1,2,3,4,5} rotated right by 2 becomes {4,5,1,2,3}.
// Reversing the whole range, then each part, achieves this without a second vector.
void rightRotate(vector<int> &arr, int k)
{
    int n = static_cast<int>(arr.size());

    if (n == 0)
        return;

    k = ((k % n) + n) % n;

    if (k == 0)
        return;

    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
}

void demonstrateRightRotation()
{
    cout << "\n=== RIGHT ROTATION ===\n";

    vector<int> arr = {1, 2, 3, 4, 5};

    rightRotate(arr, 2);

    for (int value : arr)
        cout << value << ' ';

    cout << '\n';
}

// 22. Most Frequent Even Integer
// Count only even values in a hash map; odd values are ignored.
// Return -1 if there are no even values. If the most frequent count is tied,
// choose the smaller value. Example: {2,2,4,4} returns 2.
class SolutionFrequency
{
public:
    int mostFrequentEven(const vector<int> &arr)
    {
        unordered_map<int, int> frequency;

        for (int num : arr)
            if (num % 2 == 0)
                ++frequency[num];

        if (frequency.empty())
            return -1;

        int result = -1;
        int maxFrequency = 0;

        for (const auto &entry : frequency)
        {
            int num = entry.first;
            int freq = entry.second;

            if (freq > maxFrequency ||
                (freq == maxFrequency && num < result))
            {
                maxFrequency = freq;
                result = num;
            }
        }

        return result;
    }
};

void demonstrateMostFrequentEven()
{
    cout << "\n=== MOST FREQUENT EVEN INTEGER ===\n";

    vector<int> arr = {0, 1, 2, 2, 4, 4, 1};

    SolutionFrequency solution;

    cout << "Answer: "
         << solution.mostFrequentEven(arr) << '\n';
}

// 23. Number Sign
// A class groups related operations; this method returns a string rather than
// printing directly. Examples: 15 -> "Positive", -5 -> "Negative", 0 -> "Zero".
class SolutionNumberCheck
{
public:
    string checkNumber(int n)
    {
        if (n > 0)
            return "Positive";
        if (n < 0)
            return "Negative";
        return "Zero";
    }
};

void demonstrateNumberCheck()
{
    cout << "\n=== NUMBER SIGN ===\n";

    SolutionNumberCheck solution;

    cout << solution.checkNumber(15) << '\n';
    cout << solution.checkNumber(-5) << '\n';
    cout << solution.checkNumber(0) << '\n';
}
// 24. Conditional Minimum Logic
// Find the minimum value in each category, then compare minA+minB with minC.
// Example: a={5}, b={2}, c={8} gives min(5+2, 8) = 7.
// Return false if the arrays differ in length or a required category is absent.
bool calculateConditionalMinimum(
    const vector<long long> &values,
    const vector<char> &categories,
    long long &answer)
{
    if (values.size() != categories.size())
        return false;

    long long minA = LLONG_MAX;
    long long minB = LLONG_MAX;
    long long minC = LLONG_MAX;

    bool hasA = false;
    bool hasB = false;
    bool hasC = false;

    for (size_t i = 0; i < values.size(); ++i)
    {
        if (categories[i] == 'a')
        {
            minA = min(minA, values[i]);
            hasA = true;
        }
        else if (categories[i] == 'b')
        {
            minB = min(minB, values[i]);
            hasB = true;
        }
        else if (categories[i] == 'c')
        {
            minC = min(minC, values[i]);
            hasC = true;
        }
    }

    if (!hasA || !hasB || !hasC)
        return false;

    answer = min(minA + minB, minC);
    return true;
}

void demonstrateMinLogic()
{
    cout << "\n=== CONDITIONAL MINIMUM ===\n";

    // Matching positions form pairs: value 5 belongs to a, 2 to b, and 8 to c.
    vector<long long> values = {5, 2, 8};
    vector<char> categories = {'a', 'b', 'c'};

    long long answer{};

    if (calculateConditionalMinimum(values, categories, answer))
        cout << "Answer: " << answer << '\n';
    else
        cout << "A required category is missing.\n";
}

// 25. Arrays and Linear Traversal
// A built-in array keeps a fixed number of values of one type together.
// This declaration creates five integers and initializes them with example values.
void demonstrateArrays()
{
    cout << "\n=== ARRAYS AND LINEAR TRAVERSAL ===\n";

    int numbers[] = {10, 20, 30, 40, 50};
    // This sizeof formula works here because numbers is an array in this same scope.
    const size_t length = sizeof(numbers) / sizeof(numbers[0]);

    // Array indexes start at zero: numbers[0] is 10 and numbers[2] is 30.
    // Valid indexes are 0 through length - 1; using another index is out of bounds.
    cout << "First element: " << numbers[0] << '\n';
    cout << "Element at index 2: " << numbers[2] << '\n';

    // A loop can visit every index in order. This is called linear traversal.
    cout << "Elements from first to last: ";
    for (size_t i = 0; i < length; ++i)
        cout << numbers[i] << ' ';

    // Example: 10 + 20 + 30 + 40 + 50 = 150.
    int sum = 0;
    for (size_t i = 0; i < length; ++i)
        sum += numbers[i];

    cout << "\nSum of elements: " << sum << '\n';

    // Empty braces initialize every element to zero.
    int zeroInitialized[3]{};
    cout << "First value in a zero-initialized array: "
         << zeroInitialized[0] << '\n';
}

// ============================================================
// MAIN FUNCTION — ONLY ONE MAIN IN THE ENTIRE FILE
// ============================================================

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);

    // cout << "COMPLETE C++ FUNDAMENTALS AND DSA\n";

    // // Fundamentals
    // demonstrateVariables();
    // demonstrateDataTypes();
    // demonstrateInitialization();
    // demonstrateTypeConversion();
    // demonstrateCharacters();
    // demonstrateNumberSystems();
    // demonstrateArithmetic();
    // demonstrateIncrementDecrement();
    // demonstrateOperators();
    // demonstrateEscapeSequences();
    // solvedFundamentalsProblems();

    // // Control flow
    // demonstrateIfElse();
    // solvedControlFlowProblems();

    // // Loops and functions
    // demonstrateLoops();
    // solvedLoopProblems();
    // demonstrateFunctions();

    // // DSA algorithms
    // demonstrateLinearSearch();
    // demonstrateBinarySearch();
    // demonstrateBubbleSort();
    // demonstrateRightRotation();
    // demonstrateMostFrequentEven();
    // demonstrateNumberCheck();
    // demonstrateMinLogic();
    // demonstrateArrays();

    // For interactive input practice, comment out the other calls
    // and uncomment the following line:
    // demonstrateInput();
    // cout << "\nAll sections completed successfully!\n";

    // Arrays store values of the same type in contiguous memory.
    // Linear traversal visits each element in order, from first to last.

    // array creation
    int arr[5] = {
        1,
        2,
        3,
        4,
        5,
    };
    

    return 0;
}