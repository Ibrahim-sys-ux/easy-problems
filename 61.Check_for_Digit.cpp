#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    bool hasDigit=false;
    cout<<"Enter a string:";
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        if(str[i]>='0' && str[i]<='9'){
            hasDigit=true;
            break;
        }
    }
    if(hasDigit)
        cout<<"The string contains a digit";
    else
        cout<<"The string does not contain any digit";
    return 0;
}

