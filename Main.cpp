#include <iostream>
using namespace std;

int main()
{
    // DataType variableName = value;
    int pocketMoney = 2000; // For Numbers
    int tutionFee = 500;
    int myBalance = pocketMoney - tutionFee;

    // cout << " Salam, Owais Zakir" << endl;
    // cout << "Your Pocket Money Is: " << pocketMoney << endl;
    // cout << "Your Tution Fee Is: " << tutionFee << endl;
    // cout << "Your Balance Is: " << myBalance << endl;

    // Constants are variables whose value cannot be changed once assigned
    // mostly we use caps lock letters for constants
    const int PI = 3.14; // For Constants
    // PI = 3.14159; // This will cause an error because PI is a constant

    // We Called 7.2 ,3.14 not dacimal but we called it flooting point numbers

    // How many types of data types are there in C++?;
    // There are 6 types of data types in C++:
    // 1. int - For Whole Numbers
    // 2. float - For Decimal Numbers
    // 3. double - For Decimal Numbers
    // 4. char - For Single Character
    // 5. bool - For True or False
    // 6. void - For No Value

    // ---------------------------------
    // Now we check prectical examples of all data types in C++:

    // int age = 20;         // int
    // float height = 5.9;   // float
    // double weight = 70.5; // double
    // char grade = 'A';     // char
    // bool isPassed = true; // bool
    // // void is not a variable type; it represents the absence of a value.

    // cout << " Intger: " << age << "sizeOf: " << sizeof(age) << "\n"
    //      << "Float: " << height << "sizeOf: " << sizeof(height) << "\n"
    //      << "Double: " << weight << "sizeOf: " << sizeof(weight) << "\n"
    //      << "Char: " << grade << "sizeOf: " << sizeof(grade) << "\n"
    //      << "Bool: " << isPassed << "sizeOf: " << sizeof(isPassed) << "\n";

    // -------------- Now we learn about the garbage values in c++ --------------
    // Garbage values are the random values that are stored in variables before they are initialized.
    // int garbageValue;
    // cout << "Garbage Value: " << garbageValue << endl;
    // // output is random val bcx its not initialized yet

    return 0;
}