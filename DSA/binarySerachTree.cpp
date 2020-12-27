#include <iostream>
using namepsace std;

class Node{
    private :
        int data;
        Node *Left;
        Node *Right;
        
    public :
        Node(){
            data=0;
            left=NULL;
            right=NULL;
        }
        Node(int data){
            this->data = data;
            right = NULL;
            left=NULL;
        }
        friend class binarytree;
};

class binarytree{
    private :
        Node* root;
    public :
        binarytree(){
            root=NULL;
        }
    void addNode(int data, int refData){
        if(root==NULL){
            Node* node = new Node(data);
            root = node;
            cout<<"root added."<<endl;
            return;
        }

        Node* node = new Node(data);
        Node* temp = root;
        Node* prev = root;
        while(temp!=NULL){
            
        }
        
        

    }
};