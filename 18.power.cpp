#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double base,exp,result;
    cout<<"Enter base:\n";
    cin>>base;
    cout<<"Enter exponent:\n";
    cin>>exp;
    result=pow(base,exp);
    cout<<base<<"^"<<exp<<"="<<result;
    return 0;
}
