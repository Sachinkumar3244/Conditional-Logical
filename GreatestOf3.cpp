#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter 3 Number :";
    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        cout << "First Number is Greatest";
    }
    else if (b > c && b > c)
    {
        cout << "Second Number is Greatest";
    }
    else{
        cout<<"Third Number is Greatest";
    }
}