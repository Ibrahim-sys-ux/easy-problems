#include <iostream>
using namespace std;

int main(){
    double principal,rate,time,intrest;
    cout<<"Enter The Principal: ";
    cin>>principal;
    cout<<"Enter The Annual Rate: ";
    cin>>rate;
    cout<<"Enter The Time: ";
    cin>>time;
    intrest=(principal*rate*time)/100.0;
    cout<<"The Simple Interest: "<<intrest<<endl;
    return 0;
}
