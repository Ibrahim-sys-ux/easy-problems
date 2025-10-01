#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    int count=0;
    cout<<"Enter a string:";
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        char ch=toupper(str[i]);
        if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            count++;
    }
    cout<<"Number of vowels = "<<count;
    return 0;
}

