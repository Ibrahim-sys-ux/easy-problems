#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers:\n";
    cin>>a>>b;
    if(a<b)
        cout<<a<<" is the smaller number.";
    else if(b<a)
        cout<<b<<" is the smaller number.";
    else
        cout<<"Both numbers are equal.";
    return 0;
}


