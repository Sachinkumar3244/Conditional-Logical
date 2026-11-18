#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter three sides: ";
    cin >> a >> b >> c;

    // Check if triangle is valid
    if (a + b > c && b + c > a && c + a > b)
    {
        if (a == b && b == c)
        {
            cout << "Equilateral Triangle";
        }
        else if (a == b || b == c || a == c)
        {
            cout << "Isosceles Triangle";
        }
        else
        {
            cout << "Scalene Triangle";
        }
    }
    else
    {
        cout << "Invalid Triangle";
    }

    return 0;
}