#include<iostream>
#include<set>
using namespace std;

int main(){
    int arr[] = {1,1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    set<int> val =  set<int>();
    for(int i=0;i<size;i++){ 
        if( val.find(arr[i]) == val.end() || i==0){
        val.insert(arr[i]);
        }else{
            cout<<"Duplicate Value : "<<arr[i]<<endl;
            break;
        }
    }
}