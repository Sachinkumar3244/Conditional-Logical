#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter Number :";
    cin >> num;

    if (num % 5 == 0 && num % 3 != 0)
    {
        cout << "Only Divisible by 5";
    }
    else if (num % 3 == 0 && num % 5 != 0)
    {
        cout << "Only Divisible by 3";
    }
    else if (num % 5 == 0 && num % 3 == 0)
    {
        cout << "Divisible by Both Number";
    }
    else{
        cout<<"Not Divisible by Both Number";
    }
}
