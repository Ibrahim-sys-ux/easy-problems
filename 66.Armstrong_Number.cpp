#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n,temp,sum=0,digits=0;
    cout<<"Enter a number:";
    cin>>n;
    temp=n;
    while(temp!=0){
        digits++;
        temp/=10;
    }
    temp=n;
    while(temp!=0){
        int r=temp%10;
        sum+=pow(r,digits);
        temp/=10;
    }
    if(sum==n)
        cout<<n<<" is an Armstrong number";
    else
        cout<<n<<" is not an Armstrong number";
    return 0;
}

