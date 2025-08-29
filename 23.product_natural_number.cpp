#include <iostream>
using namespace std;
int main(){
    int product=1,num;
    cout<<"Enter n:";
    cin>>num;
    for(int i=1;i<=num;i++)
        product*=i;
    cout<<"Product of first "<<num<<" natural numbers = "<<product;
    return 0;
}


