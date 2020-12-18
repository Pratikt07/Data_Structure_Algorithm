#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,0,1,1};
    int jump=0; 
    int size = sizeof(arr)/sizeof(arr[0]);
    bool flag = true;
    for(int i=0;i<size;){
        if(arr[i]==0){
            cout<<"Cannot Jump Through this Array"<<endl;
            flag = false;
            break;
        }
        if((arr[i]+i)>size-1){
            //cout<<"arr[i] ="<<arr[i]<<" arr[i]+i = "<<arr[i]+i<<" size-1 = "<<size-1<< endl;
           
        }
        if((arr[i]+i)==size-1){
           //cout<<"arr[i] ="<<arr[i]<<" arr[i]+i = "<<arr[i]+i<<" size-1 = "<<size-1<< endl;
           jump++;
            break;
        }
        else if(i==size-1){
            //cout<<"arr[i] ="<<arr[i]<<" arr[i]+i = "<<arr[i]+i<<" size-1 = "<<size-1<< endl;
            break;
        }
        else{
            //cout<<"arr[i] ="<<arr[i]<<" arr[i]+i = "<<arr[i]+i<<" size-1 = "<<size-1<< endl;
            i += arr[i];
            //cout<<"i= "<<i<<endl;
            jump++;
        }
    
        
    }
    if(flag){
        cout<<"jump required are "<<jump<<endl;
    }
    
}