#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    
    int size1,size2;
    cout<<"Enter the size of first array :"<<endl;
    cin>>size1;
    cout<<"Enter the size of second array :"<<endl;
    cin>>size2;
    
    int  arr1[size1] ; //--> Array of size1

    int  arr2[size2+size1] ;//--> Array of size1 + size2

    //Entering Elements For Array1
    for(int i = 0; i <size1;i++){
        cin>>arr1[i];
    }

    //Enter Elements for Array2
    for(int i = 0; i <size2;i++){
        cin>>arr2[i];
    }

     //--> Assigning array1 elements at the end of array2 ( Merging Two Arrays )
    for( int i=0 ,j=size2 ;  i<size1  ; i++ ,j++ ){
        arr2[j]=arr1[i];
    }

    //--> Sorting Array2 
    for(int i=0;i<size2+size1;i++){
        for(int j=i+1;j<size2+size1;j++){
            if(arr2[i]>arr2[j]){
                int temp=arr2[i];
                arr2[i]=arr2[j];
                arr2[j]=temp;
            }
        }
    }

    cout<<"Merged Array : "<<endl;

    for(int j=0;j<size2+size1;j++){
        cout<<" "<<arr2[j];
    }
    cout<<endl;
}