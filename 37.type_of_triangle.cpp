#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the angles:\n";
    cin>>a>>b>>c;
    if(a+b>c && a+c>b && b+c>a)
    {
        if(a==b && b==c)
            cout<<"Equilateral";
        else if(a==b || b==c || c==a)
            cout<<"Isosceles";
        else
            cout<<"Scalene";
    }
    else
        cout<<"Invalid Triangle";
    return 0;
}
