#include<iostream>

using namespace std;



int main(){
    int size;
    cout<<"Enter the size of stack :"<<endl; 
    cin>>size;
    int arr[size];
    int top;
    for(int i=0; i<size; i++){
       
        arr[i] =0;
   }
    int choice;
    top = -1;
    while(1){
        cout<<"1. Push an element\n2. Pop an element\n 3. peek\n 4.Show Stack\n5. exit "<<endl;
        cin>>choice;
        if(choice==1){
            
            if(top==size-1){
                cout<<"Stack is full"<<endl;
               continue;
            }else {
               
                top++;
                int ele;
                cout<<"Enter element to Push :"<<endl;
                cin>>ele;
                arr[top]=ele;     
            }
        }
        else if(choice==2){
               
            if(top==-1){
                cout<<"Stack is Empty"<<endl;
                continue;
            }else {
               
                cout<<"popped Element : "<<arr[top]<<endl;
                arr[top]=0;
                 top--;
                  
            }
        }
        else if(choice ==3){
            cout<<"top = "<<top<<endl;
            cout<<"element = "<<arr[top]<<endl;
            
        }
        else if(choice==4){
            int i=0;
            while(i<size){ // conditions --> 0=false and any non-zero number is true
                cout<<arr[i++]<<" "; 
            }
            cout<<endl;
        }
        else if(choice==5){
            break;
        }    
                  
        cout<<endl;
        cout<<endl;
    }
}