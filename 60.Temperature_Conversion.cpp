#include<iostream>
using namespace std;

int main(){
    float temp;
    int choice;
    cout<<"1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\nEnter choice:";
    cin>>choice;
    cout<<"Enter temperature:";
    cin>>temp;
    if(choice==1){
        temp=(temp*9/5)+32;
        cout<<"Temperature in Fahrenheit = "<<temp;
    }
    else if(choice==2){
        temp=(temp-32)*5/9;
        cout<<"Temperature in Celsius = "<<temp;
    }
    else{
        cout<<"Invalid choice";
    }
    return 0;
}

