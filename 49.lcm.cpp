#include <iostream>
using namespace std;
int main(){
    int a,b,x,y;
    cout<<"Enter two numbers:\n";
    cin>>a>>b;
    x=a;y=b;
    while(a!=b){
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    cout<<"LCM="<<(x*y)/a;
    return 0;
}

