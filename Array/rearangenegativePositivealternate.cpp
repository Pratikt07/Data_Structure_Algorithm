#include<iostream>
using namespace std;

int main(){
    int arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < size;i++){
        for(int j=i+1;j<size;j++){
            if(a[i]<0){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                break;
            }
            else{
                
            }
        }
    }
}