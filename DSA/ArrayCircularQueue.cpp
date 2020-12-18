#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter size of queue : ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        arr[i]=0;
    }
    int ch;
    int front=-1;
    int rear=-1;
    while(1){
        cout<<"1. enqueue an element\n2. dequeue an element\n 3. front & rear\n 4.Show queue\n5. exit "<<endl;
        cin>>ch;
        if(ch==1){
            if(front==-1 and rear==-1){
                front =0;  
            }
            if(rear==size-1 and front==0 || rear==front-1 && rear!=-1 ){
                cout<<"rear= "<<rear<<" front = "<<front<<endl;
                cout<<"queue is full"<<endl;
                continue;
            }
            else{
                    if(rear==size-1){
                        rear=0;
                    }else
                        rear++;

                    int ele;
                    cout<<"Enter element to enqueue : ";
                    cin>>ele;
                    arr[rear] = ele;

            }
        }
        else if(ch==2){
           
            if(front==-1 and rear==-1  ){
                cout<<"queue is Empty"<<endl;
                front=rear=-1;
                continue;
            }
            else{
                  
                cout<<"Element to be deququed : "<<arr[front]<<endl;
                arr[front]=0;
                if(front == size-1 and rear == size-1 || (front==rear)and(arr[front]==0)){
                    front=rear=-1;
                }else if(front == size-1 ){
                    front = 0;
                }else{
                    
                    front++;
                     
                }
            }
        }
         else if(ch==3){
                cout<<"front = "<<front<<" rear = "<<rear<<endl;
        }
        else if(ch==4){
                int i=0;
                while(i<size){
                    cout<<" "<<arr[i++];

                }
                cout<<endl;
        }
        else if(ch==5){
            break;
        }
       
    }
}