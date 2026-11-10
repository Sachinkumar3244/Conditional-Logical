#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter Number :";
    cin >> num;

    if (num >= 1000 && num <= 9999)
    {
        cout << "It's 4 Digit Number";
    }
    else
    {
        cout << "It's Not 4 Digit Number";
    }
}
