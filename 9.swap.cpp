#include <iostream>
using namespace std;
int main() {
    int num1,num2,temp;
    cout<<"Enter two numbers: ";
    cin>>num1>> num2;
    cout<<"Before swap: a ="<<num1<<", b = " <<num2<< endl;
    temp=num1;
    num1=num2;
    num2=temp;
    cout<<"After swap: a = "<<num1<< ", b = " <<num2<< endl;
    return 0;
}

