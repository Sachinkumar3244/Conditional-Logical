#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter Charecter : ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "Uppercase Charecter";
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "Lowercase Charecter";
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "Numerical Charecter";
    }
    else
    {
        cout << "Special Charecter";
    }

    return 0;
}