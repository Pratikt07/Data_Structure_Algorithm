#include<iostream>

using namespace std;

int main(){
    cout << "Enter the size of an array : "<<endl;
    int size;
    cin >>size;
    string arr[size];
    for(int i=0;i<size;i++){
       string value;
        cout<<"Enter value for "<<i+1<<" element : "<<endl;
        cin>>value;
        arr[i]=value;
    }
    for(int j=0;j<size/2;j++){
        string temp = arr[size-j-1];
        arr[size-j-1]=arr[j];
        arr[j] = temp;
    }
    for(int k=0;k<size;k++){
        cout<<" "<<arr[k];
    }
    cout<<endl;
}
