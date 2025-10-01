#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter a character:";
    cin>>ch;
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
        cout<<"The character is an alphabet";
    else
        cout<<"The character is not an alphabet";
    return 0;
}

