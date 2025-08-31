#include <iostream>
using namespace std;
int main(){
    int num,sum=0,digit,org;
    cout<<"Enter the Number:\n";
    cin>>num;
    org=num;
    while(num>0){
        digit=num%10;
        sum+=digit*digit*digit;
        num/=10;
    }
    if(sum==org)
        cout<<org<<" is an Armstrong";
    else
        cout<<org<<" is not an Armstrong";
    return 0;
}
