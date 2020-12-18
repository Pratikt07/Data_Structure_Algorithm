#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
     int temp = arr[size-1];
     cout<<"Original Array : "<<endl;
     for(int i=0; i<size; i++){
         cout<<" "<<arr[i];
     }
     cout<<endl;
    for(int i=size-1; i>=0; i--){
       
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
    

    cout<<"Rotated Array : "<<endl;
     for(int i=0; i<size; i++){
         cout<<" "<<arr[i];
     }
     cout<<endl;
}