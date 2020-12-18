#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter size of queue :"<<endl;
    cin>>size;
    string arr[size];
    for(int i=0; i<size; i++){
        arr[i]="null";
    }
    int choice;
    int front=-1;
    int rear=-1;
    while(1){
        cout<<"1. enqueue an element\n2. dequeue an element\n 3. front & rear\n 4.Show queue\n5. exit "<<endl;
        cin>>choice;
        if(choice==1){
            if(rear==size-1){
                  cout<<"queue is full"<<endl<<endl;
                 
            }
            else{
                if(front==-1 and rear==-1){
                       front =0 ;
                       
                }
                rear++;
                string str;
                cout<<"enter element to enqueue : ";
                cin>>str;
                arr[rear]=str;

            }
        }else if(choice==2){
            if(front==-1 and rear==-1 || front==rear and arr[front]=="null"){
                cout<<"queue is empty"<<endl<<endl;
                front=rear=-1;
            }
            else{
                cout<<"Element to be dequeued : "<<arr[front]<<endl;
               arr[front] = "null";
               front++;
            }
        }
        else if(choice==3){
                cout<<"front = "<<front<<" rear = "<<rear<<endl;
        }
        else if(choice==4){
                int i=0;
                while(i<size){
                    cout<<" "<<arr[i++];
                }
                cout<<endl;
        }
        else if(choice==5){
            break;
        }

    }
}