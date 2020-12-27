#include<iostream>

using namespace std;

class Node{
    private :
    int data;
    Node* next;
    
    public:
    Node(){
        data=0;
        next= NULL ;
    }
    Node(int data){
        this->data = data;
        this->next= NULL ;
    }

    int getData(){
        return data;
        
    }
    void setNext(Node* nextNode){
        next = nextNode;
    }
    Node* getNext(){
        return next;
    }
};

class LinkedList{
    private :
    Node* head ;
    

    public:
    LinkedList(){
        head = NULL;
    }
    void insertNodAfter( int data){
        if( head == NULL){ 
            //if there is no data then it will add one node and head will point to the first node
            Node* n1 = new Node(data); // create a new node with value --> data
            head = n1;// head is pointing to the first node
            return;
        }
        else{
            Node* n1 = new Node(data);
            Node* temp = head;
            while(temp->getNext()!=NULL){
                temp = temp->getNext();
            }
            temp->setNext(n1);
            return;
        }
    }       
        
        void deleteNodeafter(int data){
            if(head==NULL){
                cout<<"Nothing To Delete"<<endl;
                return;
            }
           
            Node* temp = head;
            
            while(temp!=NULL){
                temp = temp->getNext();
                if(head->getData()==data){  
                    head->setNext(temp->getNext()) ;
                    temp->setNext(NULL);
                    return;
            }
            else if(temp->getData() == data){
                    if(temp->getNext() == NULL){
                        cout<<"Last Node Selected"<<endl;
                        return;
                    }
                    else{
                        class Node* check = temp->getNext();
                        if(check->getNext() == NULL){
                            temp->setNext(NULL);
                            return;
                        }
                        else{
                            temp->setNext(check->getNext());
                            check->setNext(NULL);
                        }
                        return;
                    }
                }
               
            }
             if(temp==NULL){
                    cout<<"Data Not Found."<<endl;
                    return;
                }
        }

   

    void DiplayList(){
        Node* temp = head;
        while(temp!=NULL){
             if(temp->getNext()==NULL){
                 cout<<temp->getData()<<endl;
             }
             else{
                 cout<<temp->getData()<<" ";
                
             }
             temp = temp->getNext();
        }
        cout<<endl;
    }
};

int main(){
    LinkedList l1;
    int choice;
    cout<<"1. Insert Node Before\n2. Insert Node After\n3.Insert InBetween\n4.Delete Node After\n5.Delete Node Before\n6.Delete Node Betweem\n7.Display List\n8.Get Position\n9.Exit";
    while(1){
        cout<<"Enter Choice"<<endl;
        cin>>choice;
        if(choice == 1){
            int data;
            cout<<"Enter value for insert :";
            cin>>data;
             l1.insertNodAfter(data);
             
        }
        else if(choice == 4){
            int data;
            cout<<"Enter value for Delete the node after it :";
            cin>>data;
            
                l1.deleteNodeafter(data);
            
        }
        else if(choice == 7 ){
            l1.DiplayList();
        }
        else if(choice == 9 ){
            break;
        }
    }
    cout<<"Enter choice";
    return 0;
}