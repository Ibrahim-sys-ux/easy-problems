#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter The Number: ";
    cin>>number;
    if(number>0)
        cout<<number<<" is Posititve";
    else if(number<0)
        cout<<number<<" is Negative";
    else
        cout<<number<<" is Zero";
    return 0;
}

