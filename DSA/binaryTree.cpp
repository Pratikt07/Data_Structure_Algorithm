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

        
        

    }
};

void InorderTree(Node* node, int refData,bool found=false){

    
    if(node == NULL || found==true){
        return;
        }
    
    if(node->data==refdata){
       
    }
    InorderTree(node->left);
    // cout<<" "<<node->data<<endl;
    InorderTree(node->right);
}
 void PreorderTree(Node* node){
     if(node == NULL){
            return;
        }
        cout<<" "<<node->data<<endl;
        PreorderTree(node->left);  
        PreorderTree(node->right);
}
void PostorderTree(Node* node){
    if(node == NULL){
            return;
           }
        PostorderTree(node->left);  
        PostorderTree(node->right);
         cout<<" "<<node->data<<endl;
}