#include <iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"Enter the Three number:\n";
    cin>>num1>>num2>>num3;
    if((num1>num2)&&(num1>num3))
        cout<<num1<<" is the Largest";
    else if((num2>num1)&&(num2>num3))
        cout<<num2<<" is the Largest";
    else
        cout<<num3<<" is the Largest";
    return 0;
}

