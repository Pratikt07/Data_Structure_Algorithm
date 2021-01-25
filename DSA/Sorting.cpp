#include <iostream>
using namespace std;



void bubble_sort(int *arr,int size){
    int count = 0;
    for(int i=0;i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i] > arr[j]){
                count++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        // for(int i=0;i<size;i++){
        //     cout<<" "<<arr[i];
        // }
        // cout<<endl;
    }
     for(int i=0;i<size;i++){
            cout<<" "<<arr[i];
        }
        cout<<endl;
        cout<<"count = "<<count<<endl;
}


void selection_sort(int* arr,int size){
    int min, minIndex;
    min =arr[0];
    minIndex = 0 ;
    for(int j=0;j<size;j++){
        min = arr[j];
        for(int k=j+1;k<size;k++){
            if(min > arr[k]){
                min = arr[k];
                minIndex = k;
            }
        }
    if(min == arr[j]){
        continue;
    }
    else{
        int temp = arr[j];
        arr[j] = arr[minIndex];
        arr[minIndex] = temp;
    }
    for(int k=0;k<size;k++){
        cout<<" "<<arr[k];
    }
    cout<<endl;
    }
}

void Insertion_sort(int arr[],int size){
    int i, key, j;  
    for (i = 1; i < size; i++) 
    {  
        key = arr[i];  
        j = i - 1;  
  
        /* Move elements of arr[0..i-1], that are  
        greater than key, to one position ahead  
        of their current position */
        while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            //cout<<" "<<arr[j+1]<<" = "<<arr[j]<<endl;
            j = j - 1;  
        }  
        arr[j + 1] = key;  
         for(int i=0;i<size; i++){
            cout<<" "<<arr[i];
        }
        cout<<endl;
    }  
    
}

int main(){
    int size;
    cout<<"enter the size of array"<<endl;
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++) cin>>arr[i];
    //selection_sort(arr,size);
    //bubble_sort(arr,size);
    Insertion_sort(arr,size);
    return 0;
    
}
