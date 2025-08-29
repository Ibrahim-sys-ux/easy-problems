#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the Character: ";
    cin>>ch;
    if(ch>='0'&&ch<='9')
        cout<<ch<<" is a digit";
    else
        cout<<ch<<" is not a digit";
    return 0;
}

