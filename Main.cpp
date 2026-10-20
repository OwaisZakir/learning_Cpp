
#include <iostream>
#include <iomanip>
#include <limits>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <climits>

using namespace std;

// 1. Variables and Constants
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
void demonstrateNumberSystems()
{
    cout << "\n=== NUMBER SYSTEMS ===\n";

    cout << "Decimal: " << 10 << '\n';
    cout << "Octal: " << 012 << '\n';
    cout << "Binary: " << 0b1010 << '\n';
    cout << "Hexadecimal: " << 0xA << '\n';
}

// 7. Arithmetic Operators
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
void demonstrateEscapeSequences()
{
    cout << "\n=== ESCAPE SEQUENCES ===\n";

    cout << "First line\nSecond line\n";
    cout << "Column 1\tColumn 2\n";
    cout << "Quote: \"Hello\"\n";
    cout << "Backslash: \\\n";
}

// 12. Fundamentals Problems
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

int findLarger(int a, int b)
{
    return (a > b) ? a : b;
}

string checkEvenOdd(int n)
{
    return n % 2 == 0 ? "Even" : "Odd";
}

string checkNumberSign(int n)
{
    if (n > 0)
        return "Positive";
    if (n < 0)
        return "Negative";
    return "Zero";
}

bool isLeapYear(int year)
{
    return year % 400 == 0 ||
           (year % 4 == 0 && year % 100 != 0);
}

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
    return age >= 18 ? "Eligible" : "Not Eligible";
}

string divisibleByFive(int n)
{
    return n % 5 == 0 ? "Yes" : "No";
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
long long sumFromOneToN(int n)
{
    if (n <= 0)
        return 0;

    long long sum = 0;

    for (int i = 1; i <= n; ++i)
        sum += i;

    return sum;
}

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

bool isPalindrome(int n)
{
    if (n < 0)
        return false;
    return static_cast<long long>(n) == reverseNumber(n);
}

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

    vector<long long> values = {5, 2, 8};
    vector<char> categories = {'a', 'b', 'c'};

    long long answer{};

    if (calculateConditionalMinimum(values, categories, answer))
        cout << "Answer: " << answer << '\n';
    else
        cout << "A required category is missing.\n";
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

    // For interactive input practice, comment out the other calls
    // and uncomment the following line:
    // demonstrateInput();

    // cout << "\nAll sections completed successfully!\n";

    // array is a liner  DS  store data of smae type
    
    return 0;
}