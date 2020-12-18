#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1, 5, 7, 1};
    int k;
    cout<<"Enter value of Sum = ";
    cin>>k;
    int count=0;
    int sum=0;
    for(int i=0;i<arr.size();i++){
        sum = arr[i];
       for(int j=i+1;j<arr.size();j++){
           sum+=arr[j];
           if(sum==k){
               count++;
               sum-=arr[j];
               continue;
           }else{
               sum-=arr[j];
                continue;
           }
       }
    }
    cout<<"No of pairs having sum = "<<k<<" are "<<count<<endl;
}