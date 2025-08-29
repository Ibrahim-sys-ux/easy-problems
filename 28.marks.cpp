#include<iostream>
using namespace std;
int main(){
    int mark;
    cout<<"Enter marks (0-100):";
    cin>>mark;
    if(mark>=90)
        cout<<"Grade: A+";
    else if(mark>=80)
        cout<<"Grade: A";
    else if(mark>=70)
        cout<<"Grade: B";
    else if(mark>=60)
        cout<<"Grade: C";
    else if(mark>=50)
        cout<<"Grade: D";
    else
        cout<<"Grade: F";
    return 0;
}

