#include <iostream>
using namespace std;

int main()
{
    // DataType variableName = value;
    const int pocketMoney = 2000; // For Numbers
    int tutionFee = 500;
    int myBalance = pocketMoney - tutionFee;
    // pocketMoney = 3000; // This will cause an error because pocketMoney is a constant
    cout << " Salam, Owais Zakir" << endl;
    cout << "Your Pocket Money Is: " << pocketMoney << endl;
    cout << "Your Tution Fee Is: " << tutionFee << endl;
    cout << "Your Balance Is: " << myBalance << endl;
    return 0;
}