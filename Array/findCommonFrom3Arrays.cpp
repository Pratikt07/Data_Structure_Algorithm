#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n1,n2,n3;
      vector<int> common;
    cout<<"Enter the size of 1st 2nd 3rd array";
    cin>>n1>>n2>>n3;
    int a[n1];
    int b[n2] ;
    int c[n3];
    for(int i=0; i<n1; i++) cin>>a[i];
    for(int i=0; i<n1; i++) cin>>b[i];
    for(int i=0; i<n1; i++) cin>>c[i];

  
    for(int i=0; i<n1; i++){
        for(int j=0;j<n2;j++){
            if(a[i]==b[j]){
                common.push_back(a[i]);
            }
        }
    }
    cout<<"common elements from first and second array inserted."<<endl;
    for(int i=0; i<n3; i++){
        for(int j=0;j<common.size();j++){
            if(c[i] == common[j]){
                cout<<" "<<c[i];
            }
        }
    }
    cout<<endl;

    }