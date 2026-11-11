 #include<iostream>
 using namespace std;
 int main(){
    char ch;
    cout<<"Enter a charecter :";
    cin>>ch;

    if(ch >= 'A' && ch <='Z'){
        cout<<"Capital Alphabe";
    }
    else{
      cout<<" Not a Capital Alphabe";
    }
 }