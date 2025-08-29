#include <iostream>
using namespace std;
int main(){
    int sum=0,num;
    cout<<"Enter n:";
    cin>>num;
    for(int i=1;i<=num;i++)
        sum=sum+i;
    cout<<"Sum of first "<<num<<" natural numbers = "<<sum<<endl;
    return 0;
}

