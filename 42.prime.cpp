#include <iostream>
using namespace std;
int main(){
    int num,f=1;
    cout<<"Enter the Number:\n";
    cin>>num;
    if(num<=1)
        f=0;
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            f=0;
            break;
        }
    }
    if(f)
        cout<<num<<" is Prime";
    else
        cout<<num<<" is not Prime";
    return 0;
}
