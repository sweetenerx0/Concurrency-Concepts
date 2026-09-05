#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "Enter first integer: ";
    cin >> num1;
    cout << endl << "Enter second integer: ";
    cin >> num2;
    cout << endl << "Enter third integer: ";
    cin >> num3;
    cout << endl;

    int *pNum1 = new int;
    int *pNum2 = new int;
    int *pNum3 = new int;

    *pNum1 = num1;
    *pNum2 = num2;
    *pNum3 = num3;

    cout << "First Integer: " << num1 << endl;
    cout << "Physical memory address: " << pNum1 << endl << endl;
    cout << "Second Integer: " << num2 << endl;
    cout << "Physical memory address: " << pNum2 << endl << endl;
    cout << "Third Integer: " << num3 << endl;
    cout << "Physical memory address: " << pNum3 << endl;

    delete pNum1;
    delete pNum2;
    delete pNum3;

    return 0;
}