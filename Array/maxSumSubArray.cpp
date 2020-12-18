#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,-17,8,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];
    int maxEle = 0;
    for(int i=0;i<size;i++){
        maxEle = arr[i];
        if(max<maxEle){
            max = maxEle;
        }
        for(int j=i+1;j<size;j++){
            maxEle += arr[i];
            if(max<maxEle){
                max = maxEle;
            }
        }
    }
    cout<<"Max = "<<max<<endl;
}