#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Insertion Sort"<<endl;
    cout<<"Enter size of Array:";
    cin>>n;
    cout<<"Enter Array elements:";

    int arr[100]={0};

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}