#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a,b,c,d,root1,root2;
    cout<<"Enter a,b,c:\n";
    cin>>a>>b>>c;
    d=b*b-4*a*c;
    if(d>0){
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
        cout<<"Real and Distinct:"<<root1<<" "<<root2;
    }
    else if(d==0){
        root1=-b/(2*a);
        cout<<"Real and Equal:"<<root1<<" "<<root1;
    }
    else{
        double real=-b/(2*a);
        double imag=sqrt(-d)/(2*a);
        cout<<"Complex:"<<real<<"+"<<imag<<"i "<<real<<"-"<<imag<<"i";
    }
    return 0;
}

