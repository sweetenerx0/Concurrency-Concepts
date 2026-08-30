#include <iostream>
#include <string>
using namespace std;
int main()
{   string stringFirst;
    string stringSecond;
    for (int i = 0; i <3; i++){
        cout << "Type in first string: ";
        cin >> stringFirst;
        cout << "Type in second string: ";
        cin >> stringSecond;
        cout << stringFirst + stringSecond << endl;
    }
return 0;
}