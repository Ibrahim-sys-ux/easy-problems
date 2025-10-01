#include<iostream>
using namespace std;

int main(){
    int n;
    float sum=0,avg;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements:";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
        sum+=arr[i];
    avg=sum/n;
    cout<<"Average of array elements = "<<avg;
    return 0;
}

