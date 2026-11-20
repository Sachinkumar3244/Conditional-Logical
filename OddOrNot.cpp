#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter Numbers : ";
    cin>>num1>>num2;

    if((num1%2!=0 && num2%2==0) || (num1%2==0 && num2%2!=0)){
        cout<<"One is Odd";
    }
    else if(num1%2!=0 && num2%2!=0){
        cout<<"Both are Odd";
    }
    else{
        cout<<"None is Odd";
    }
}
