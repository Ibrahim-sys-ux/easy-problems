#include <iostream>
using namespace std;
int main() {
    int num1,num2,remainder;
    cout<<"Enter the dividend: ";
    cin>>num1;
    cout<<"Enter the divisor: ";
    cin>>num2;
    if(num2!=0){
        remainder=num1%num2;
        cout<<"Remainder="<<remainder<< endl;
    } else {
        cout<<"Error: Division by zero is not allowed."<< endl;
    }

    return 0;
}

