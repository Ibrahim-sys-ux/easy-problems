#include <iostream>
using namespace std;
int main(){
    float celsius,fahrenheit;
    cout<<"Enter the Tempreture in Celsius: ";
    cin>>celsius;
    fahrenheit=(celsius*9.0/5.0)+32;
    cout<<"Fahrenheit: "<<fahrenheit<<endl;
    return 0;
}
