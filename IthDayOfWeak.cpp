#include <iostream>
using namespace std;
;
int main()
{
    int num;
    cout << "Enter Day Number : ";
    cin >> num;

    if(num== 1){
        cout<<"Sunday"<<endl;
    }
    else if(num== 2){
        cout<<"Monday"<<endl;
    }
    else if(num== 3){
        cout<<"Tuesday"<<endl;
    }
    else if(num== 4){
        cout<<"Wednesday"<<endl;
    }
    else if(num== 5){
        cout<<"Thrusday"<<endl;
    }
    else if(num== 6){
        cout<<"Friday"<<endl;
    }
    else if(num== 7){
        cout<<"Saturday"<<endl;
    }
    else{
        cout<<"Invalid Day"<<endl;
    }
}