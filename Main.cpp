// Learning With Documentation
#include <iostream>
using namespace std;

int main()
{
    int globalOne = 1;
    int globalTwo = 10;

    // // DataType variableName = value;
    // int pocketMoney = 2000; // For Numbers
    // int tutionFee = 500;
    // int myBalance = pocketMoney - tutionFee;

    // cout << " Salam, Owais Zakir" << endl;
    // cout << "Your Pocket Money Is: " << pocketMoney << endl;
    // cout << "Your Tution Fee Is: " << tutionFee << endl;
    // cout << "Your Balance Is: " << myBalance << endl;

    // Constants are variables whose value cannot be changed once assigned
    // mostly we use caps lock letters for constants
    // const int PI = 3.14; // For Constants
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

    // Type Conversion in C++;
    // implicit type conversion
    // Explicit type conversion
    // Type casting

    // Pehly smjho type conversion hota kya h
    // kisi cheiz ka ghar tabdeel krna type conversion hota h

    //--------- Implicit / widning Type Conversion -----------
    // int intValue = 10;
    // double doubleValue = intValue; // Implicit type conversion from int to double
    // cout << "Implicit Type Conversion: " << doubleValue << "\n"
    //      << "sizeOf: " << sizeof(doubleValue)
    //      << "\n"
    //      << "Implicit Type Conversion: " << intValue
    //      << "\n"
    //      << "sizeOf: " << sizeof(intValue)
    //      << endl;

    // jb ap kisi choty byt k data  ko bari byt k data me convert krty ho to usy implicit type conversion kehty h

    //--------- Explicit / Narrowing Type Conversion -----------
    // is main apko khud mention krna hota h type ka mtlb ismian
    // ismian apko type cast krni hoti h like
    // Exemple:
    // int intValue2 = 10, intValue3 = 3;
    // int devoidedValue = intValue2 / intValue3; // This will give 3 because both are integers
    // double doubleValue2 = (double)intValue2 / intValue3; // This will give 3.33333 because we are explicitly converting int to double
    // cout << "Explicit Type Conversion: " << doubleValue2 << "\n"
    //         << "sizeOf: " << sizeof(doubleValue2)
    //         << "\n"
    //         << "Explicit Type Conversion: " << devoidedValue
    //         << "\n"
    //         << "sizeOf: " << sizeof(devoidedValue)
    //         << endl;

    // ye tb hota h jb ap ksisi choty byt k data ko bari byt k data me convert krty ho to usy explicit type conversion kehty h
    // ye yaad krna higa
    // Bohat important cheiz ye h k hr lang me charectore k lye ek value hoti h usko bolty hain
    // ASCII Value
    // 1 = 48
    // A = 65
    // a = 97
    // jb ap char ko kisi me covert krogay to apko uski ASCII value milay gi
    // when we perform arthmetic oprarion bitween 2 char it will be use the ASCII

    // char charValue = 'a';
    // cout << charValue << "\n"
    // << (int) charValue
    // << endl;

    // ----------- Opratores -------------------
    // Unary , Binary
    // jaha single oprante hon ussy Unary bolty haind
    // and dubble waly Binary

    // ++ and -- we use it in 2 way
    // pree
    // post
    // a++ / ++a
    // a-- / --a

    // int valOne = 20, valTwo = 5;

    // cout << valOne + valTwo << "\n"
    //      << valOne - valTwo << "\n"
    //      << valOne * valTwo << "\n"
    //      << valOne / valTwo << "\n"
    //      << valOne % valTwo << "\n";

    // cout << valOne++ << "\n"; // 20
    // valOne = 20;

    // cout << ++valOne << "\n"; // 21
    // valOne = 20;

    // cout << --valOne << "\n"; // 19
    // valOne = 20;

    // cout << valOne-- << "\n"; // 20

    // --------- Relational Opratores ---------
    //  == , < , > => , >= , != ,etc...
    // int relationalIntOne = 2, relationalIntTwo = 4;

    // cout << (relationalIntOne <= relationalIntTwo) << "\n"
    //      << (relationalIntOne < relationalIntTwo) << "\n"
    //      << (relationalIntOne >= relationalIntTwo) << "\n"
    //      << (relationalIntOne > relationalIntTwo) << endl;

    // ---- assignment opratrores -------
    // relationalIntOne += 10;
    // cout << relationalIntOne;

    // OR and AND opratrores
    // cout << ((relationalIntOne <= relationalIntTwo) && (relationalIntOne == 1)) << "\n"
    //      << ((relationalIntOne <= relationalIntTwo) || (relationalIntOne == 1));

    // cout << (globalOne != globalTwo) << "\n"
    //      << (globalOne != globalOne) << endl;
    cout << ((5 > 3) && (8 < 6));
    return 0;
}