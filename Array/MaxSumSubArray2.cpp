#include<iostream>
using namespace std;

int main(){
    int arr[] = {-1,-2,-3,-4};
    int maxsum = arr[0];
    int maxEle;
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){

        maxEle = arr[i];

        if(maxsum < maxEle){
            maxsum = maxEle;
        }

        for(int j=i+1;j<size;j++){

            maxEle += arr[j];

            if(maxsum < maxEle){
                maxsum = maxEle;
            }
        }
    }

    cout<<"Max Sum = "<<maxsum<<endl;
}