#include<iostream>
using namespace std;

void rightTriangle(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++)cout<<"*";
        cout<<"\n";
    }
}

void invertedTriangle(int n){
    for(int i=n;i>=1;i--){
        for(int j=0;j<i;j++)cout<<"*";
        cout<<"\n";
    }
}

void pyramid(int n){
    for(int i=1;i<=n;i++){
        for(int s=0;s<n-i;s++)cout<<" ";
        for(int j=0;j<2*i-1;j++)cout<<"*";
        cout<<"\n";
    }
}

void hollowPyramid(int n){
    for(int i=1;i<=n;i++){
        for(int s=0;s<n-i;s++)cout<<" ";
        if(i==1)cout<<"*";
        else if(i==n){
            for(int j=0;j<2*n-1;j++)cout<<"*";
        }else{
            cout<<"*";
            for(int j=0;j<2*i-3;j++)cout<<" ";
            cout<<"*";
        }
        cout<<"\n";
    }
}

int main(){
    int n,choice;
    cout<<"Enter size:";
    cin>>n;
    cout<<"\n1.Right-angled Triangle\n2.Inverted Triangle\n3.Pyramid\n4.Hollow Pyramid\nEnter choice:";
    cin>>choice;
    cout<<"\n";
    switch(choice){
        case 1:rightTriangle(n);
            break;
        case 2:invertedTriangle(n);
            break;
        case 3:pyramid(n);
            break;
        case 4:hollowPyramid(n);
            break;
        default:cout<<"Invalid choice\n";
    }
    return 0;
}

