#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(){
    string str;
    int choice;
    cout<<"Enter a string:";
    getline(cin,str);
    cout<<"1. Convert to Uppercase\n2. Convert to Lowercase\nEnter choice:";
    cin>>choice;
    if(choice==1){
        for(int i=0;i<str.length();i++)
            str[i]=toupper(str[i]);
    }
    else if(choice==2){
        for(int i=0;i<str.length();i++)
            str[i]=tolower(str[i]);
    }
    else{
        cout<<"Invalid choice";
        return 0;
    }
    cout<<"Converted string:"<<str;
    return 0;
}

