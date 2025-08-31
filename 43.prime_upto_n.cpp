#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the Number:\n";
    cin>>num;
    for(int i=2;i<=num;i++){
        int flag=1;
        for(int j=2;j<i;j++){
            if(i%j==0){
                flag=0;
                break;
            }
        }
        if(flag==1)
            cout<<i<<" ";
    }
    return 0;
}

