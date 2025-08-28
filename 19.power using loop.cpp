#include<iostream>
using namespace std;
int main(){
    double base,exp,result=1;
    cout<<"Enter base:\n";
    cin>>base;
    cout<<"Enter exponent:\n";
    cin>>exp;
    for(int i=1;i<=exp;i++)
        result*=base;
    cout<<base<<"^"<<exp<<"="<<result;
    return 0;
}
